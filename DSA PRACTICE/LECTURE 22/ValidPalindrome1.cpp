// PROGRAM 05: Valid Palindrome (125 leetcode and Code studio) 
/*
STEP01: faltu character remove karne hai
STEP02: sab lowercase me kardo
STEP03: check kro palindrome hai ya nhi
*/
class Solution 
{
public:

    bool isPalindrome(string s) 
    {
        int st=0;
        int end=s.length()-1;

        while(st<=end)
        {
            //isalnum to check whether its alphabet or number
            if(!isalnum(s[st]))
            {
                st++; 
                continue;
            } 


            if(!isalnum(s[end]))
            {
                end--; 
                continue;
            }

            //tolower to cover it into lower case incase its case sensitive
            if(tolower(s[st])!=tolower(s[end]))
            { 
                return 0;
            }
            else
            {
                st++;
                end--;
            }   

        }
        return 1;
    }      

};
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