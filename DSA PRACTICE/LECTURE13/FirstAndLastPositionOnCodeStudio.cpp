#include <bits/stdc++.h> 

int firstPosition(vector<int>& arr,int n,int k)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]>k)// goto left side
        {
            end=mid-1;
        }
        else if (arr[mid]<k)// goto right side
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int lastPosition(vector<int>& arr,int n,int k)
{
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;

    while(start<=end)
    {
        if(arr[mid]==k)
        {
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]>k)// goto left side
        {
            end=mid-1;
        }
        else if (arr[mid]<k)// goto right side
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int, int> p;
    p.first=firstPosition(arr, n, k);
    p.second=lastPosition(arr, n, k);
    
    return p;
}