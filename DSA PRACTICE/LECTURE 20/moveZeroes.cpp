// PROGRAM 03: MOVES ZEROES IN AN ARRAY(leetcode 283)

class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
        int size=nums.size();
        int i=0;
        int j=0;
        while(j<size)
        {
                if(nums[j]!=0)
                {
                   swap(nums[i],nums[j]);
                    i++;
                }
            j++;
        }              
        
    }
};

/*
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

Input: nums = [0]
Output: [0]

*/