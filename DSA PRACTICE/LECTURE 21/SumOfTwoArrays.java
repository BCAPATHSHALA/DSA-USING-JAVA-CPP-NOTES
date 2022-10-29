// PROGRAM 03: Sum Of Two Arrays (Code Studio Problem)

import java.util.* ;
import java.io.*; 
public class Solution {
    public static int[] findArraySum(int[] a, int n, int[] b, int m) {
    List<Integer> ans = new ArrayList<Integer>();
    int i=n-1;
    int j=m-1;
    int carry=0;
    
    while(i>=0 && j>=0)
    {
        int sum=a[i]+b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.add(sum);
        i--;
        j--;
    }    
    //first case
    while(i>=0)
    {
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.add(sum);
        i--;
    }
    //second case
    while(j>=0)
    {
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.add(sum);
        j--;
    }
     //third case
    while(carry!=0)
    {
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.add(sum);
    }
    
    //print ans
    Collections.reverse(ans);
        
    int listSize=ans.size();
        
    // Storing it inside array of strings
    int[] listToArray = new int[listSize];
    // Converting ArrayList to Array
    // using get() method
    for (int k = 0; k < listSize; k++)
    {
        listToArray[k] = ans.get(k);
    }
       
        
    return listToArray;

    }
}

/*
Case 01: 
INPUT: a[]={1,2,3,4} and b[]={6}
OUTPUT: {1,2,4,0}
EXPLAIN: a=1234 and b=6 then a+b=1240

Case 02: 
INPUT: a[]={6} and b[]={1,2,3,4}
OUTPUT: {1,2,4,0}
EXPLAIN: a=6 and b=1234 then a+b=1240

Case 03: 
INPUT: a[]={9,9,9} and b[]={9,9,9}
OUTPUT: {1,9,9,8}
EXPLAIN: a=999 and b=999 then a+b=1998
*/