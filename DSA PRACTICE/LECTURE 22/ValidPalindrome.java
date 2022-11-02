// PROGRAM 05: Valid Palindrome (125 leetcode and Code studio) 
/*
STEP01: faltu character remove karne hai
STEP02: sab lowercase me kardo
STEP03: check kro palindrome hai ya nhi
*/
import java.util.* ;
import java.io.*; 
class Solution 
{
    public boolean isPalindrome(String s) 
    {
        // STEP01 AND STEP02
        s = s.toLowerCase().replaceAll("[^A-Za-z0-9]", "");

        //STEP03
        int i = 0;
        int j = s.length() - 1;
        while(i <= j) 
        {
            if (s.charAt(i) != s.charAt(j)) 
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}

/*
Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Example 2:
Input: s = "race2 a car"
Output: false
Explanation: "race2acar" is not a palindrome.

Example 3:
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
*/