// PROGRAM 01: Rotate Array (leetcode 189) Optimal Solution
public class Solution {
    public void rotate(int[] nums, int k) 
    {
        
        // (2) reverse 3 times 
        k = k % nums.length; 
        reverse(nums, 0, nums.length-1); 
        reverse(nums, 0, k-1);
        reverse(nums, k, nums.length-1); 
        
    }
    
    public void reverse(int[] nums, int start, int end)
    {
        while(start < end)
        {
            int temp = nums[start]; 
            nums[start] = nums[end]; 
            nums[end]=temp; 
            start++; 
            end--; 
        }
    }
}
/*
Example 1:
Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]

Example 2:
Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
*/