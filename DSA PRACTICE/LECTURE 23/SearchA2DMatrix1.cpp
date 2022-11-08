//PROGRAM 07: Search a 2D Matrix (Leetcode 74)
/* 
Time Complexity - O(Log n) where n=row * col
Space Complexity - O(1).

step01: sort 1D if matrix is not sorted
step02: binary search or linear to find the target value
*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
     
        // Binary Search
        
        int start=0;
        int end=(rowSize*colSize)-1;
        int mid=start+(end-start)/2;
        
        while(start<=end)
        {
            int element=matrix[mid/colSize][mid%colSize]; // key factor

            if(element==target)  
            {
                return 1;
            }
            else if(element<target)
            {
                start=mid+1;
            }
            else if(element>target)
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        
        return 0;
        
        
    }
};

/*
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

*/