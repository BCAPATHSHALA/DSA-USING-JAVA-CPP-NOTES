//724. Find Pivot Index

class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int rightSum=0;
        int leftSum=0;
        int i=0;
        
        for(int num: nums)
        {
            rightSum +=num;
        }
        
        for(i=0;i<nums.size();i++)
        {
            rightSum -=nums[i];
            if(rightSum==leftSum)
            {
                return i;
            }
            leftSum +=nums[i];
        }
        return -1;
    }
};