// PROGRAM 08: Replace spaces (Code Studio)
import java.util.* ;
import java.io.*; 
public class Solution {
    public static StringBuilder replaceSpaces(StringBuilder str) {
        
        StringBuilder temp = new StringBuilder();
        
        for(int i=0;i<str.length();i++)
            {
                if(str.charAt(i)==' ')
                {
                    temp.append("@40");
                    
                    /*OR
                    temp.append('@');
                    temp.append('4');
                    temp.append('0');
                    */
                    
                }
                else
                {
                    temp.append(str.charAt(i));
                }
            }
        return temp;
    }
}
/*
Example 1:
Input: str = manoj kumar
Output: manoj@40kumar

Example 2:
Input: str = manoj
Output: manoj
*/