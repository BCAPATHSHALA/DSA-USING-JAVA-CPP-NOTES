// PROGRAM 02: Reverse of String (344 leetcode)

import java.util.*;
class Solution {
    public void reverseString(char[] s) {
        
        int start =0;
        int end=(s.length)-1;
        while(start<=end)
        {
            char temp=s[start];
            s[start]=s[end];
            s[end]=temp;
            
            start++;
            end--;
        }
        
    }
}
/*
Enter Your Name: MANOJ
Your Name is : JONAM
*/