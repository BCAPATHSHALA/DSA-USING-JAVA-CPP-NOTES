// PROGRAM 10: Permutation in String (567 Leetcode)

/*
Time Complexity:O(N+M)
Space Complexity: O(1)
*/

class Solution {
    
    public static boolean checkEqual(int store1[], int store2[])
    {
        int i=0;
        while(i<26)
        {
            if(store1[i]!=store2[i])
                return false;
            i++;
        }
        return true;
    }
    
    public boolean checkInclusion(String s1, String s2) 
    {
        //step1: Count and Store elements of s1 in an array store1
        int store1[]=new int[26];
        
        for(int i=0;i<s1.length();i++)
        {
            int index=s1.charAt(i)-'a';
            store1[index]++;            
        }
        
        //step02: Traverse s2 and Count and Store elements of s2 according WindowSize
        // and store elements in an array store2 and compare s1 and s2
        
        int j=0;
        int store2[]=new int[26];
        int windowSize=s1.length();
        
        while(j<windowSize && j<s2.length())
        {
            int index=s2.charAt(j)-'a';
            store2[index]++;
            j++;
        }
        
        //compare
        if(checkEqual(store1, store2))
        {
            return true;
        }
        
        //step03: store new element and delete first old element and store second old 
        //element in store 2 and the compare store1 and store2
        
        while(j<s2.length())
        {         
            char newChar=s2.charAt(j);
            int index=newChar-'a';
            store2[index]++;
            
            char oldChar=s2.charAt(j-windowSize);
            index=oldChar-'a';
            store2[index]--;
            
            j++;
            
            //compare
            if(checkEqual(store1, store2))
            {
                return true;
            }

        }
    
        return false;
        
    }
}

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