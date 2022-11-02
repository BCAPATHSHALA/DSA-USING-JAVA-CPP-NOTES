// PROGRAM 10: Permutation in String (567 Leetcode)

/*
Time Complexity:O(N+M)
Space Complexity: O(1)
*/

class Solution {
    
private:
    bool checkEqual(int store1[26],int store2[26])
    {
        int i=0;
        while(i<26)
        {
            if(store1[i]!=store2[i])
            {
                return 0;
            }
            i++;
        }
        return 1;
    }
    
public:
    bool checkInclusion(string s1, string s2) {
        
        //step01:count character of s1 and store counting value in an array
        int store1[26]={0};
        
        for(int i=0; i<s1.length(); i++)
        {
            int index=s1[i]-'a';
            store1[index]++;
        }
        
        //step02:traverse s2 and count of s2 for windowSize and compare store1 and store2
        
        int j=0;
        int windowSize=s1.length();
        int store2[26]={0};
        
        //running for first window
        while(j<windowSize && j<s2.length())
        {
            int index=s2[j]-'a';
            store2[index]++;
            
            j++;
        }
        
        //compare
        if(checkEqual(store1,store2))
        {
            return 1;
        }
        
        //step03:process the window and store the one new element and other old element
        // and delete old character and then compare store 1 and 2
        while(j<s2.length())
        {
            char newChar=s2[j];
            int index=newChar-'a';
            store2[index]++;
            
            char oldChar=s2[j-windowSize];
            index=oldChar-'a';
            store2[index]--;
            
            j++;
            
            if(checkEqual(store1,store2))
            {
                return 1;
            }
        }
        return 0;
        
    }
};

/*
Example 1:
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").

Example 2:
Input: s1 = "ab", s2 = "eidboaoo"
Output: false

Example 3:
Input: s1 = "ab", s2 = "a"
Output: false
*/