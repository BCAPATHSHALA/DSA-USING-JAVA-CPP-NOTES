//Search in Rotated Sorted Array 
// Approach:01 Time complexity: O(lon n)
class Solution {
    public int search(int[] nums, int target) 
    {
        int size=nums.length;
        
        int pivot=getPivot(nums,size);
        
        if(target>=nums[pivot] && target<=nums[size-1])
        {
            return binarySearch(nums,pivot,size-1,target);
        }
        else
        {
            return binarySearch(nums,0,pivot-1,target);
        }
        
    }
     int getPivot(int nums[], int n)
{
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        if(nums[mid]>=nums[0])
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
int binarySearch(int nums[],int s, int e,int key)
{
    int start=s;
    int end=e;
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
        if(nums[mid]==key)
        {
            return mid;
        }
        else if(nums[mid]>key)
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

}