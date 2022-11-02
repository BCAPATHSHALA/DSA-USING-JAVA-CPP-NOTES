// PROGRAM 07: Maximum occurring character in a string (GFG)
import java.util.Scanner;

class MaximumOccurringCharacter
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        String s=sc.next();

        System.out.print("OUTPUT: "+getMaxOccCharacter(s));
    }


    //Function to find the maximum occurring character in a string.
    public static char getMaxOccCharacter(String s) 
    {

        int arr[] = new int[26];

        //create an array of count of characters
        for(int i=0; i<s.length(); i++) 
        {
            char ch = s.charAt(i);
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

        char finalAns=(char)('a'+ans);
        return finalAns;
    }

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