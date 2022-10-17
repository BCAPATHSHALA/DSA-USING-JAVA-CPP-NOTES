//PROBLEM:01 >>>> Book Allocation Problem: https://bit.ly/3GiCqY0 

#include <bits/stdc++.h> 
bool isPossible(vector<int> arr,int n,int m,int mid)
{
    int studentCASE=1;
    int pageSUM=0;
    
    for(int i=0;i<n;i++)
    {
        if(pageSUM + arr[i]<=mid)
        {
            pageSUM += arr[i];
        }
        else
        {
            studentCASE++;
            if(studentCASE>m || arr[i]>mid)
            {
                return false;
            }
            pageSUM=arr[i];            
        }
    }
    return true;
}


int allocateBooks(vector<int> arr, int n, int m) {
    int start=0;
    int sum=0;
    
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int end=sum;
    int ans=-1;
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

/*
Example: 
Number of books = 4 and Number of students = 2

pages[] = { 10,20,30,40}

OUTPUT: 60
*/