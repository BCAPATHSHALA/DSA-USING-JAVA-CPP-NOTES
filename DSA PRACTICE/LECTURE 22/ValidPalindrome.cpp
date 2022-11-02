// PROGRAM 05: Valid Palindrome (125 leetcode and Code studio) 

class Solution {
   
private:
    bool valid(char ch)
    {
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9'))
        {
            return 1;
        }
        return 0;
    }
    
    char toLowerCase(char ch) 
    {
        if(ch >='a' && ch <='z')
        {
            return ch;
        }
        else
        {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }
    
    bool checkPalindrome(string temp) 
    {
        int s = 0;
        int e = temp.length()-1;

        while(s<=e) 
        {
            if(temp[s] != temp[e])
            {
                return 0;       
            }
            else
            {
                s++;
                e--;
            }
        }
        return 1;
    }
    
public:
    bool isPalindrome(string s) 
    {
        //faltu character remove karne hai
        string temp="";
        
        for(int j=0;j<s.length();j++)
        {
            if(valid(s[j]))
            {
                temp.push_back(s[j]);
            }
        }
        
        
        //sab lowercase me kardo
        for(int j=0;j<s.length();j++)
        {
            temp[j]=toLowerCase(temp[j]);
        }
        
        //check kro palindrome hai ya nhi
        return checkPalindrome(temp); 
        
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