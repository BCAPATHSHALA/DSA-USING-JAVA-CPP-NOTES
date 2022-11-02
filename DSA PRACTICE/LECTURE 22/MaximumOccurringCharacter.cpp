// PROGRAM 07: Maximum occurring character in a string (GFG)

#include<iostream> 
using namespace std;

char getMaxOccCharacter(string s) 
{

    int arr[26] = {0};

    //create an array of count of characters
    for(int i=0; i<s.length(); i++) 
    {
        char ch = s[i];
        //lowercase
        int number = 0;
        if (ch>='a' && ch<='z')
        {
            number = ch - 'a';
        }
        else//uppercase
        {
            number = ch - 'A';
        }
        arr[number]++;
    }

    //find maximum occ character
    int maxi = -8, ans = 0;
    for(int i=0;i<26; i++) 
    {
        if(maxi < arr[i]) 
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a'+ans;
}

int main( ) 
{
    string s;
    cin >> s;

    cout << getMaxOccCharacter(s) << endl;

    return 0;
}

/*
Example 1:
Input: str = testsample
Output: e
Explanation: e is the character which
is having the highest frequency.

Example 2:
Input: str = output
Output: t
Explanation:  t and u are the characters
with the same frequency, but t is
lexicographically smaller.
*/