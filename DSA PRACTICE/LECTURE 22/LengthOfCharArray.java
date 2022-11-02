// PROGRAM 01: LENGTH OF STRING

import java.util.*;

class PrintCharArray 
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
 
        // Use of the next() method to char Array
        String name = sc.next();
        System.out.println(name);

        System.out.println("Length of String: "+getLength(name));
    }

    public static int getLength(String name)
    {
        int count=0;
        for(int i=0;i<name.length();i++)
        {
            if (name.charAt(i)!='\0')
                count++;            
        }

        return count;
    }
}

/*
Enter Your Name: MANOJ KUMAR
Your Name is : MANOJ
Length of String: 5
*/