//PROGRAM 08: Search a 2D Matrix II (Leetcode 74)
/*
Time Complexity - O(Log n) where n=row * col
Space Complexity - O(1).

*/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int rowSize=matrix.size();
        int colSize=matrix[0].size();
        
        int rowIndex=0;
        int colIndex=colSize-1;
        
        while(rowIndex<rowSize && colIndex>=0)
        {
            int element=matrix[rowIndex][colIndex];
            
            if(element==target)
            {
                return 1;
            }
            else if(element<target)
            {
                rowIndex++;
            }
            else
            {
                colIndex--;
            }
        }
        return 0;
        
    }
};


/*
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true

Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
Output: false

*/