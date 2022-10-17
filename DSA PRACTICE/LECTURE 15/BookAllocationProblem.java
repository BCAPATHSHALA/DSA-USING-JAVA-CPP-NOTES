////PROBLEM:01 >>>> Book Allocation Problem: https://bit.ly/3GiCqY0 


import java.util.* ;
import java.io.*; 
public class Solution 
{
    public static boolean isPossible(ArrayList<Integer> arr,int n,int m,int mid)
    {
        int studentCASE=1;
        int pageSUM=0;
        
        for(int i=0;i<n;i++)
        {
            if(pageSUM + arr.get(i)<=mid)
            {
                pageSUM += arr.get(i);  ////////////////////////allocateBooks(arr1.get(i), arr1.get(i).size(), arr2.get(i));
                                         
            }
            else
            {
                studentCASE++;
                if(studentCASE>m || arr.get(i)>mid)
                {
                    return false;
                }
                pageSUM=arr.get(i);            
            }
        }
        return true;
    }
    
     public static int allocateBooks(ArrayList<Integer> arr, int n, int m) 
     {
        int start=0;
        int sum=0;
        
        for(int i=0;i<n;i++)
        {
            sum+=arr.get(i);
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
}

/*
Example: 
Number of books = 4 and Number of students = 2

pages[] = { 10,20,30,40}

OUTPUT: 60
*/