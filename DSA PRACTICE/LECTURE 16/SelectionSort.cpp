/**
 SORTING ALGORITH:01 
 Selection Sort
 Time Complexity: O(n^2)
 Space Complexity: O(1)
**/

#include <bits/stdc++.h> 
void selectionSort(vector<int>& arr, int n)
{   
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}

/*
INPUT: 6 2 8 4 10
OUTPUT: 2 4 6 8 10
*/