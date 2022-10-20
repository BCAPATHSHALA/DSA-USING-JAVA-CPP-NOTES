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
     int i=1;  
    while(i<n)
      {
          int temp=arr[i];
          int j=i-1;
          while(j>-1)
          {
              if(arr[j]>temp) // shifting the elements
              {
                  arr[j+1]=arr[j];
              }
              else // arr[j]<temp the break the while loop of jth index
              {
                  break;
              }
              j--;
          }
          arr[j+1]=temp; //
        i++;
      }
  }
}

////////////////////////////////////////
// SOLUTION:02 with while loop
///////////////////////////////////////
import java.util.* ;
import java.io.*; 

public class Solution {

  public static void insertionSort(int n , int[] arr) {
     int i=1;  
    while(i<n)
      {
          int temp=arr[i];
          int j=i-1;
          while(j>-1 && arr[j]>temp)
          {
              arr[j+1]=arr[j];
              j--;
          }
          arr[j+1]=temp;
        i++;
      }
  }
}


/*
INPUT: 6 2 8 4 10
OUTPUT: 2 4 6 8 10
*/
