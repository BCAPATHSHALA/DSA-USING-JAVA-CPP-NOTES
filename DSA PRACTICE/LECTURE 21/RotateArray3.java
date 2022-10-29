// PROGRAM 01: Rotate Array (leetcode 189) TLE
public class Solution {
    public void rotate(int[] nums, int k)
    {
            
        //(3) move k times
        while(k-->0)
        {
            int tmp = nums[nums.length-1];
            for(int i = nums.length-1; i>0; i--)
            {
                nums[i] = nums[i-1];
            }
            nums[0] = tmp; 
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