// PROGRAM 12: String Compression (443 Leetcode)

/*
Time Complexity:O(N)
Space Complexity: O(1)
*/
class Solution {
public:
    int compress(vector<char>& chars) {
        
        int i=0;
        int ansIndex=0;
        int n=chars.size();
        
        while(i<n)
        {
            int j=i+1;
            while(j<n && chars[i]==chars[j])
            {
                j++;
            }
            //yaha kab ayega
            //ya to vector poora traverse ho jaye
            //ya fir new/different character ecounter kia hai
            
            //oldCharacter store karlo
            chars[ansIndex++]=chars[i];
            // ansIndex++;
            
            int count=j-i;
            
            if(count>1)
            {
                //converting counting into single digit and saving in answer
                string cnt=to_string(count);
                for(char ch: cnt)
                {
                    chars[ansIndex++]=ch;
                    // ansIndex++;
                }
            }
            //moving to new/different character
            i=j;
        }
        return ansIndex;
    }
};
/*
step01: first count the charcter
step02: second store the old character in vector
step03: third store character count number in vector if character count more than 1 
step04: forth return the index of vector
*/

/*
Example 1:
Input: chars = ["a","a","b","b","c","c","c"]
Output: Return 6, and the first 6 characters of the input array should be: ["a","2","b","2","c","3"]
Explanation: The groups are "aa", "bb", and "ccc". This compresses to "a2b2c3".

Example 2:
Input: chars = ["a"]
Output: Return 1, and the first character of the input array should be: ["a"]
Explanation: The only group is "a", which remains uncompressed since it's a single character.

Example 3:
Input: chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]
Output: Return 4, and the first 4 characters of the input array should be: ["a","b","1","2"].
Explanation: The groups are "a" and "bbbbbbbbbbbb". This compresses to "ab12".
*/


////////////////////////////////////

class Solution {
public:
    int compress(vector<char>& arr) {
        
        int n = arr.size();
        
        // we will insert the compressed character at j
        
        int j = 0;
        
        int i = 0;
        
        while(i < n)
        {
            // count the no. of consecutive characters
            
            int count = 1;
            
            while(i + 1 < n && arr[i] == arr[i + 1])
            {
                count++;
                
                i++;
            }
            
            // insert at j according to count
            
            if(count == 1)
            {
                arr[j++] = arr[i];
            }
            else
            {
                arr[j++] = arr[i];
                
                // split the count then insert at j
                
                string str = to_string(count);
                
                for(int k = 0; k < str.size(); k++)
                {
                    arr[j++] = str[k];
                }
            }
            
            i++;
        }
        
        return j;
    }
};