/*34. Find First and Last Position of Element in Sorted Array

OPTIMAL SOLUTION:01 AND TIME COMPLEXITY: O(Log n)
Two times Binary search for start and end
*/

class Solution {
 public:
  vector<int> searchRange(vector<int>& nums, int target) {
   
    int start =  binarySearch(nums, target, true);
    int end =  binarySearch(nums, target, false);

    return vector<int>({start, end});
  }

  int binarySearch(vector<int>& nums, int target, bool firstindex) 
  {
    int ans = -1;
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
      int m = left + (right - left) / 2;

      if (target > nums[m])// goto to right side
      {
            left = m + 1;
      }
      else if (target < nums[m])// goto left side
      {
          right = m - 1;
      } 
      else if (target==nums[m])// mid is equal to target then check first and last index of target
      {
        ans = m;
        if (firstindex)// if target's first index is mid then goto to left side to check the remaining index's value is matched of not to the taget's value
        {
             right = m - 1;
        }
        else // if target's last index is mid then goto to right side to check the remaining index's value is matched of not to the taget's value
        {
             left = m + 1;
        }
         
      }
    }

    return ans;
  }
};



/*
NOTE: You must write an algorithm with O(log n) runtime complexity.

Example 1:
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

Example 3:
Input: nums = [], target = 0
Output: [-1,-1]
 

Constraints:
0 <= nums.length <= 105
-109 <= nums[i] <= 109
nums is a non-decreasing array.
-109 <= target <= 109
*/