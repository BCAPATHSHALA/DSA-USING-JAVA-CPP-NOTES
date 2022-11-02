// PROGRAM 08: Replace spaces (Code Studio)
#include <bits/stdc++.h> 
string replaceSpaces(string &str){
    
        string temp="";

        for(int i=0;i<str.length();i++)
            {
                if(str[i]==' ')
                {
                    temp.push_back('@');
                    temp.push_back('4');
                    temp.push_back('0');
                    
                }
                else
                {
                    temp.push_back(str[i]);
                }
            }
        return temp;
}
/*
Example 1:
Input: str = manoj kumar
Output: manoj@40kumar

Example 2:
Input: str = manoj
Output: manoj
*/