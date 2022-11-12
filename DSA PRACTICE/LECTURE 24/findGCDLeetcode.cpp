//Program02: Find Greatest Common Divisor of Array (1979 Leetcode)
class Solution {
public:
    int findGCD(vector<int>& nums) {
        
        // Find the min element
        int x=*min_element(nums.begin(), nums.end());
        // Find the max element
        int y=*max_element(nums.begin(), nums.end());
        
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
};

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