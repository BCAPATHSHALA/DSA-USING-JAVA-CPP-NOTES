//7: Find the pair sum from an array (Code studio)
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
  vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j]==s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[j],arr[i]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
} 




/* .................Leetcode Problem

// Brute force solution :

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0 ; i<nums.size()-1 ; i++){
            for(int j=i+1 ; j<nums.size() ; j++){
                if(nums[i] + nums[j] == target) return {i,j} ;
            }
        }
        return {};
    }
};

..................................................................................................................................
// Fast solution ( 0(n) ) :

The idea is that we fix an element from the array nums and search for (target - x) in the rest.

To make the search faster, I use hash map.

You can read more about hash maps here : leetcode explore

umap is a hash map with key (the element from nums), value (index of the element from nums)

For each element in the array nums, we fix the element itself. Then, we search for (target - element) in the hash map.

In umap, we store each element from nums if it does not exist already.

For each element in nums, we check if (target - element) exists in the hash map.

If it's the case we return the two elements : index of the element from nums which is i and the element from umap which is umap[target - nums[i]].

If it's not the case we keep searching for the element untill the end of the array nums

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        for(int i = 0 ; i < nums.size(); i++) {
            if( umap.find(target - nums[i]) != umap.end() ) return { umap[target - nums[i]], i };
            else umap[nums[i]] = i;
        }
        return {};
    }
};
*/
