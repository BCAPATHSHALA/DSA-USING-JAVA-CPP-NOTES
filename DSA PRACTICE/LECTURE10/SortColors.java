// Sort array of 0's 1's and 2's

/*
constraints:
O(1) extra space
nums[] contain only 0, 1 and 2
TC:O(N)
SC:O(1)
*/


// Algorithm:
/*
Consider three pointers low = 0, mid = 0, high = nums.size() - 1
The algorithm ensures that at any point, every element before low is 0, every element after high is 2, every element in between are either 0, 1 or 2 i.e. unprocessed.
We'll use mid pointer to traverse and check the array elements i.e. while(mid <= high). Three cases are possible:
nums[mid] == 0 In this case swap(nums[low], nums[mid]) and increment both low and mid pointer i.e. low++ mid++
nums[mid] == 1 In this case mid++
nums[mid] == 2 In this case swap(nums[mid], nums[high]) and decrement high pointer i.e. high--
*/

/*
Example:
Consider nums[] = [0 1 1 0 1 2 1]
Iteration 1:
low = 0, mid = 0, high = 6
nums[mid] == 0
swap(nums[low++], nums[mid++]
[0 1 1 0 1 2 1]
Iteration 2:
low = 1, mid = 1, high = 6
nums[mid] == 1
mid++
[0 1 1 0 1 2 1]
Iteration 3:
low = 1, mid = 2, high = 6
nums[mid] == 1
mid++
[0 1 1 0 1 2 1]
Iteration 4:
low = 1, mid = 3, high = 6
nums[mid] == 0
swap(nums[low++], nums[mid++]
[0 0 1 1 1 2 1]
Iteration 5:
low = 2, mid = 4, high = 6
nums[mid] == 1
mid++
[0 0 1 1 1 2 1]
Iteration 6:
low = 2, mid = 5, high = 6
nums[mid] == 2
swap(nums[mid], nums[high--]
[0 0 1 1 1 1 2]
Iteration 7:
low = 2, mid = 5, high = 5
nums[mid] == 1
mid++
[0 0 1 1 1 1 2]
Iteration 8:
low = 2, mid = 6, high = 5
mid > high
Exit the loop
*/

//code:01 C++

    void sortColors(vector<int>& nums) {
        
        // initialize variables:
        int low = 0, mid = 0, high = nums.size() - 1;
        
        // logic:
        while(mid <= high)
        {
            switch(nums[mid])
            {
                case 0: swap(nums[low++], nums[mid++]); break;
                
                case 1: mid++; break;
                
                case 2: swap(nums[mid], nums[high--]); break;
            }
        }
    }

//code:02 C++

    class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int start=0;
        int mid=0;
        int end=nums.size()-1;
        
        while(mid<=end)
        {
            if(nums[mid]==0)
            {
                int temp=nums[mid];
                nums[mid]=nums[start];
                nums[start]=temp;
                mid++;
                start++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                int temp=nums[mid];
                nums[mid]=nums[end];
                nums[end]=temp;
                end--;
            }
        }
    }
};

//code:03 Java

class Solution {
    public void sortColors(int[] nums) {
        
        int start=0;
        int mid=0;
        int end=nums.length-1;
        
        while(mid<=end)
        {
            if(nums[mid]==0)
            {
                int temp=nums[mid];
                nums[mid]=nums[start];
                nums[start]=temp;
                mid++;
                start++;
            }
            else if(nums[mid]==1)
            {
                mid++;
            }
            else if(nums[mid]==2)
            {
                int temp=nums[mid];
                nums[mid]=nums[end];
                nums[end]=temp;
                end--;
            }
        }
    }
}