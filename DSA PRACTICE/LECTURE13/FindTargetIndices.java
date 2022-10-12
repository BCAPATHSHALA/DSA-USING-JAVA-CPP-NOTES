// 2089. Find Target Indices After Sorting Array (leetcode problem)
// 1st Method [Sorting]:
// Code:

public List<Integer> targetIndices(int[] nums, int target) {        
        Arrays.sort(nums);
	    ArrayList<Integer> ans = new ArrayList<Integer>();
		 
        for(int i=0;i<nums.length;i++){
            if(nums[i] == target) ans.add(i);
        }
        return ans;  
}

/*
Complexity Analysis:
Time Complexity: O(nlogn) [As the array is being sorted]
Space Complexity: O(1) [No extra space used]

Explanation:

The array nums is sorted using Array.sort() method.
Then while traversing nums, if any element equals the target its index is added in the ArrayList ans.
List ans is then returned as answer.
*/
// 2nd Method [Without Sorting/Optimal]:
// Code:

    public List<Integer> targetIndices(int[] nums, int target) {
         int belowTCount=0, tCount=0;    
        for(int n : nums){
            if(n<target)
                belowTCount++;
            else if(n==target)
                tCount++;
        }
        List<Integer> ans = new ArrayList<>();
            for(int t=0;t<tCount;t++)
                ans.add(belowTCount++);
    
        return ans;
    }

/*    
Complexity Analysis:
Time Complexity: O(n) [As no sorting is done]
Space Complexity: O(1) [No extra space used]

Explanation:

While traversing nums, these variable are used:
belowTCount: To maintain the count of elements having lesser value than target.
tCount: To maintain the count of elements having value equal to target.

Now, as you can see in the for-loop, we are adding belowtCount's value(increased after every iteration) to our list, as it lets us ignore the indexes which have lesser value than the target and only add indexes of elements equal to target.

This is the same thing we would have done if the array was sorted.

List ans is then returned as answer.
*/

// methdo 03:
// code:
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
