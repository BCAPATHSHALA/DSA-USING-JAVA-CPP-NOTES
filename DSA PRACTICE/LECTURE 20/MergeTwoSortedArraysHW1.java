// HW PROGRAM 01: MERGE TWO SORTED ARRAYS (LeetCode 88)
class Solution 
{
    public void merge(int[] nums1, int m, int[] nums2, int n) 
    {
        for (int i=m; i<m+n; i++) 
        {
            nums1[i]=nums2[i-m];
        }
        
        insertionSort(nums1);    
    }
    
   public static void insertionSort(int[] nums1) 
   {
       int n=nums1.length;
		for(int i=1;i<n;i++)
          {
              int temp=nums1[i];
              int j=i-1;
              for(;j>=0;j--)
              {
                  if(nums1[j]>temp)
                  {
                      nums1[j+1]=nums1[j];
                  }
                  else
                  {
                      break;
                  }
              }
              nums1[j+1]=temp;
          }
	}
    
}

/*
Example 1:
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

Example 2:
Input: nums1 = [1], m = 1, nums2 = [], n = 0
Output: [1]
Explanation: The arrays we are merging are [1] and [].
The result of the merge is [1].

Example 3:
Input: nums1 = [0], m = 0, nums2 = [1], n = 1
Output: [1]
Explanation: The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. 
The 0 is only there to ensure the merge result can fit in nums1.
*/