// PROGRAM 06: Reverse words (151 Leetcode)

/*
step01: Reverse the whole string
step02: Find the starting index of word
step03: Store the complete word and find the last index of word
step04: Reverse the each word and after every word we need space [" "]
step05: Resize the string to last index
step06: Return string
*/
class Solution 
{
public:
    string reverseWords(string s) 
    {
        //Step01: Reverse the whole string
        reverse(s.begin(), s.end());
        
        
        int i = 0, j = 0, n = s.size(), lastIndex = 0;
        
        while(j < n)
        {
            //Step02: Find the starting index of word
            while(j < n && s[j] == ' ') 
            {
                j++;
            }
            
            int startIndex = i;
            
            //Step03: Store the complete word and find the last index of word
            while(j < n && s[j] != ' ')
            {
                s[i] = s[j];
                i++;
                j++;
                lastIndex = i;
            }
            
            //Step04: Reverse the word
            reverse(s.begin() + startIndex, s.begin() + i);
            
            //Step05: After every word we need space [" "]
            s[i] = ' '; 
            i++;
        }
        
        //Step06: Resize the string to last index...
        s.resize(lastIndex);
        return s;
    }
};


/*
Example 1:
Input: s = "the sky is blue"
Output: "blue is sky the"

Example 2:
Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.

Example 3:
Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
*/