//Program02: Find Greatest Common Divisor of Array (1979 Leetcode)

import java.util.*;
class Solution {
    public int findGCD(int[] nums) {
            
        // Find the min element
        int x=findMin(nums);
        // Find the max element
        int y=findMax(nums);
        
        //Find GCD
        int i=1;
        int gcd=1;
        
        if(x==y)
        {
            return x; 
        }

        while (i < y) 
        {
          if (x % i == 0 && y % i == 0) 
          {
            gcd=i;
          }
          i++;
        }
       return gcd;
        
    }
    
    public static int findMin(int nums[])
    {
        int unique=Integer.MAX_VALUE;
        for(int i=0; i<nums.length; i++)
        {
            if(unique>nums[i])
            {
                unique=nums[i];
            }
        }
        return unique;
    }
    
     public static int findMax(int nums[])
    {
        int unique=Integer.MIN_VALUE;
        for(int i=0; i<nums.length; i++)
        {
            if(unique<nums[i])
            {
                unique=nums[i];
            }
        }
        return unique;
    }
}

/*
Step01: Find minimum and maximum elements
Step02: Find GCD(min,max)
*/

/*

Example 1:
Input: nums = [2,5,6,9,10]
Output: 2

Example 2:
Input: nums = [7,5,6,8,3]
Output: 1

Example 3:
Input: nums = [3,3]
Output: 3
*/