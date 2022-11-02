/*Remove all non-alphanumeric characters from a String in Java

1. Using String.replaceAll() method
A common solution to remove all non-alphanumeric characters from a String is with regular expressions. 
The idea is to use the regular expression [^A-Za-z0-9] to retain only alphanumeric characters in the string.
*/

public class RemoveAllNonAlphaNumeric
{
    public static String removeAllNonAlphaNumeric(String s) {
        if (s == null) 
        {
            return null;
        }
        return s.replaceAll("[^A-Za-z0-9]", "");
    }
 
    public static void main(String[] args) {
        String s = "(A)B,C|D_E1- ";
 
        System.out.println(removeAllNonAlphaNumeric(s));
    }
}

/*
INPUT: "(A)B,C|D_E1 -"
OUTPUT: ABCDE1

*/



//Reference Link: https://www.techiedelight.com/remove-non-alphanumeric-characters-from-string-java/#:~:text=You%20can%20also%20use%20%5B%5E%5C,zA%2DZ_0%2D9%5D%20.
