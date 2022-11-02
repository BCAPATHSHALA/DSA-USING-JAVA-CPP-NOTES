// PROGRAM 10.1: Find All Anagrams in a String (Leetcode 438)

/*
Time Complexity:O(N+M)
Space Complexity: O(1)
*/

class Solution {
private:
    bool checkEqual(int store1[26] , int store2[26])
    {
        int i=0;
        while(i<26)
        {
            if(store1[i]!=store2[i])
                return 0;
            i++;
        }
        return 1;
    }
    
public:
    vector<int> findAnagrams(string s, string p) {
        
        vector<int> ansIndex;
        
        // step01: Count and store elements of p in an array store1[26]
        int store1[26]={0};
        
        for(int i=0;i<p.length();i++)
        {
            int index=p[i]-'a';
            store1[index]++;
        }
        
        // step02: Traverse s and coun, store elements of s in an array store2[26] 
        // according to windowSize and compare store1 and store2
        
        int j=0;
        int store2[26]={0};
        int windowSize=p.length();
        
        
        // First sliding window
        while(j<windowSize && j<s.length())
        {
            int index=s[j]-'a';
            store2[index]++;
            j++;
        }
        
        
        // compare store1 and store1
        int startIndex=0;
        if(checkEqual(store1 , store2))
        {
            startIndex=j-windowSize;
            ansIndex.push_back(startIndex);
        }
        
        // step03: Store newChar and Delete first OldChar and store in an array store2[26]
        
        while(j<s.length())
        {
            char newChar=s[j];
            int index=newChar-'a';
            store2[index]++;
            
            char oldChar=s[j-windowSize];
            index=oldChar-'a';
            store2[index]--;
            
            j++;
            
            // compare store1 and store1
            if(checkEqual(store1 , store2))
            {
                startIndex=j-windowSize;
                ansIndex.push_back(startIndex);
            }
        } 
        
        return ansIndex;
    }
};
/*
Example 1:
Input: s = "cbaebabacd", p = "abc"
Output: [0,6]
Explanation:
The substring with start index = 0 is "cba", which is an anagram of "abc".
The substring with start index = 6 is "bac", which is an anagram of "abc".

Example 2:
Input: s = "abab", p = "ab"
Output: [0,1,2]
Explanation:
The substring with start index = 0 is "ab", which is an anagram of "ab".
The substring with start index = 1 is "ba", which is an anagram of "ab".
The substring with start index = 2 is "ab", which is an anagram of "ab".

*/