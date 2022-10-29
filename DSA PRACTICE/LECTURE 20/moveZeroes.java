// PROGRAM 03: MOVES ZEROES IN AN ARRAY(leetcode 283)

import java.util.*;
class Solution {
    public void moveZeroes(int[] nums) 
    {
        int size=nums.length;
        int i=0;
        int j=0;
        while(j<size)
        {
                if(nums[j]!=0)
                {
                    int temp=nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    i++;
                }
            j++;
        }     
    }
}

/*
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Input: nums = [0]
Output: [0]

*/