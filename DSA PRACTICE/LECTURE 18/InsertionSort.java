/**
 SORTING ALGORITH:03
 Insertion Sort
 Time Complexity: O(n^2)
 Space Complexity: O(1)
**/

import java.util.* ;
import java.io.*; 

public class Solution {

	public static void insertionSort(int n , int[] arr) {
		for(int i=1;i<n;i++)
          {
              int temp=arr[i];
              int j=i-1;
              for(;j>=0;j--)
              {
                  if(arr[j]>temp)
                  {
                      arr[j+1]=arr[j];
                  }
                  else
                  {
                      break;
                  }
              }
              arr[j+1]=temp;
          }
	}
}

/*
INPUT: 6 2 8 4 10
OUTPUT: 2 4 6 8 10
*/
