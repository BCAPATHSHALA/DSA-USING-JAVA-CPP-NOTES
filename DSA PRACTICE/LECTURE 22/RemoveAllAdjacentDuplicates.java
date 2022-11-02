//PROGRAM 11: Remove All Adjacent Duplicates In String (leetcode 1047)

/*
SOLUTION02: Without using Using Stack
Time Complexity :- O(N)
Space Complexity :- O(N)
*/

import java.util.*;
class Solution {
    public String removeDuplicates(String s) 
    {
     
        int i = 0, n = s.length();
     
        char[] res = s.toCharArray();
     
        for (int j = 0; j < n; j++, i++) 
        {
            res[i] = res[j];
            // count = 2
            if (i > 0 && res[i - 1] == res[i])
            {
                
                i -= 2; // i=0
            }
        }
        return new String(res, 0, i);
    }
        
}