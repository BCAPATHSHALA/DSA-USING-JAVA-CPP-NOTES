/**
 SORTING ALGORITH:02
 Bubble Sort
 Time Complexity: O(n^2)
 Space Complexity: O(1)
**/

import java.util.* ;
import java.io.*; 

public class Solution 
{
    public static void bubbleSort(int[] arr, int n)
    {   
        for(int i=0;i<n;i++) // for(int i=1;i<n;i++) and traverse round 1 to n-1
        {
            boolean swapped=false;
            for(int j=0;j<n-i-1;j++) // for(int j=0;j<n-i;j++) and comperision 0 to (n-i)th term
            {
                if(arr[j]>arr[j+1]) // a>b then swap(a,b) >>>>> a=arr[j] and b=arr[j+1]
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    swapped=true;
                }
            }
            if(swapped==false) // already sorted array Time Complexity: O(n)
            {
                break;
            }
        }
    }
}


/*
INPUT: 6 2 8 4 10
OUTPUT: 2 4 6 8 10
*/