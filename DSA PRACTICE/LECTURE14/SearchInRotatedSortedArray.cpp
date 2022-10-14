//Search in Rotated Sorted Array 
// Approach:01 Time complexity: O(lon n)
#include <bits/stdc++.h> 
int findPosition(vector<int>& arr, int n, int k)
{
   // Write your code here.
   // Return the position of K in ARR else return -1.
   int start = 0, end = arr.size()-1;
   
   while(start <= end){
       int mid = start + (end - start)/2;
       
       if(arr[mid] == k){
           return mid;
       }
       
       if(arr[start] <= arr[mid]){
           // 'k' may be is in the left half(Line-I)
           if(k >= arr[start] && k <= arr[mid]){
               end = mid -1;
           }
           else{
               start = mid +1;
           }
       }
       // 'k' may be in the right half(Line-I)
       else{
           if(k >= arr[mid] && k <= arr[end]){
                 start = mid +1;
           }
           else{
               end = mid -1;
           }
       }
   }
   return -1;
}


//////////////////////////////////////////////////////////////////////////////////////////////////////////
// Approach:02 Time complexity: O(lon n)

#include <bits/stdc++.h> 
//find pivot first
int getPivot(vector<int>& arr, int n)
{
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else //if(arr[mid]<=arr[0])
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

//apply the binary seacrh third
int binarySearch(vector<int>& arr,int s, int e,int key)
{
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}


int findPosition(vector<int>& arr, int n, int k)
{
    //apply the condition second
    int pivot=getPivot(arr,n);
    if(k>=arr[pivot] && k<=arr[n-1])
    {//BS on line-II
        return binarySearch(arr,pivot,n-1,k);
    }else
    {//BS on line-I
        return binarySearch(arr,0,pivot-1,k);
    }
}