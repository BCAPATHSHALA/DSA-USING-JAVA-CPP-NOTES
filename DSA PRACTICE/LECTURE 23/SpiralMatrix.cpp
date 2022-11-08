//PROGRAM 05: Spiral Matrix (Leetcode 54)
/*
Time Complexity - O(row * column) = O(N).
Space Complexity - O(1).

direction 1 - print starting row (left to right)
direction 2 - print ending column (top to buttom)
direction 3 - print ending row (right to left)
direction 4 - print starting column (buttom to top)
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;
        int row=matrix.size();
        int col=matrix[0].size();
        
        int count=0;
        int total=row*col;
        
        //index initialization
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;
        
        
        while(count<total)
        {
            // print starting row
            for(int index=startingCol;index<=endingCol && count<total;index++)
            {
                ans.push_back(matrix[startingRow][index]);
                count++;
            }
            startingRow++;
            
            // print ending column
            for(int index=startingRow;index<=endingRow && count<total;index++)
            {
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;
            
            // print ending row
            for(int index=endingCol;index>=startingCol && count<total;index--)
            {
                ans.push_back(matrix[endingRow][index]);
                count++;
            }
            endingRow--;
            
            // print starting column
            for(int index=endingRow;index>=startingRow && count<total;index--)
            {
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};

/*
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]

*/


//////////////////////////////////////////////////
/*
SOLUTION02: USING SWITCH CASE
Time Complexity - Time taken to cover row * column elements is O(row * column) = O(N).
Space Complexity - Since we do not use any extra space, space taken is O(1).
Explanation - We fix four pointers - left, right, top, bottom which we use to traverse the matrix.
After moving in one direction, we change our direction to traverse cyclically.
On traversing the top row, we increment top. On traversing the right row, we decrement right.
On traversing the bottom row, we decrement bottom. On traversing the left row, we increment left.
direction 1 - left to right
direction 2 - top to bottom
direction 3 - right to left
direction 4 - bottom to top
*/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix){
        int row = matrix.size(), col = matrix[0].size(), left = 0, right = matrix[0].size() - 1, top = 0, bottom = matrix.size() - 1, direction = 1;
        vector<int> order;
        
        while(order.size() < row * col)
        {
            switch(direction){
                case 1:
                    for(int i = left; i <= right; i++) order.push_back(matrix[top][i]);
                    direction = 2;
                    top++;
                    break;
                    
                case 2:
                    for(int i = top; i <= bottom; i++) order.push_back(matrix[i][right]);
                    direction = 3;
                    right--;
                    break;
                    
                case 3:
                    for(int i = right;i >= left; i--) order.push_back(matrix[bottom][i]);
                    direction = 4;
                    bottom--;
                    break;
                    
                case 4:
                    for(int i = bottom; i >= top; i--) order.push_back(matrix[i][left]);
                    direction = 1;
                    left++;
                    break;
            }
        }
        return order;
    }
};