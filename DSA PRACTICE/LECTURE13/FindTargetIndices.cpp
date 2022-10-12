// 2089. Find Target Indices After Sorting Array (leetcode problem)
//////////////////////////////////////////////
// OPTICAL SOLUTION:01(BINARY SEARCH)
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int start=0;
        int end=nums.size()-1;
        int mid=start+(end-start)/2;
        
        while(start<=end)
        {
            if(nums[mid]==target)
            {
                ans.push_back(mid);
                if(nums[mid]<nums[mid+1]) // goto to left side  
                {
                    end=mid-1;
                }
                else // goto right side
                {
                    start=mid+1;
                }
            }
            else if(nums[mid]>target)// goto left side
            {
                end=mid-1;
            }
            else // goto right side
            {
                start=mid+1;
            }
            
            mid=start+(end-start)/2;
        }
        sort(ans.begin(),ans.end());
        return ans;      
    }
};

//////////////////////////////////////////////
// OPTICAL SOLUTION:02 TC: O(n log n)
//2089. Find Target Indices After Sorting Array

//IN JAVA
class Solution {
    public List<Integer> targetIndices(int[] nums, int target) {
        int count = 0, lessthan = 0;
        for (int n : nums) {
            if (n == target) count++;
            if (n < target) lessthan++;
        }
        
        List<Integer> result = new ArrayList<>();
        for (int i = 0; i < count; i++) {
            result.add(lessthan++);
        }
        return result;
    }
}


//IN C++

class Solution {
public:
    vector<int> targetIndices(vector<int>& A, int target) {
        sort(begin(A), end(A));
        vector<int> ans;
        for (int i = 0; i < A.size(); ++i) 
        {
            if (A[i] == target) 
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};



/*
Example 1:
Input: nums = [1,2,5,2,3], target = 2
Output: [1,2]
Explanation: After sorting, nums is [1,2,2,3,5].
The indices where nums[i] == 2 are 1 and 2.

Example 2:
Input: nums = [1,2,5,2,3], target = 3
Output: [3]
Explanation: After sorting, nums is [1,2,2,3,5].
The index where nums[i] == 3 is 3.

Example 3:
Input: nums = [1,2,5,2,3], target = 5
Output: [4]
Explanation: After sorting, nums is [1,2,2,3,5].
The index where nums[i] == 5 is 4.

*/