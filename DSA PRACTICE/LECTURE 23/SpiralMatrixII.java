// 9. Spiral Matrix II (54 Leetcode)

class Solution {
    public int[][] generateMatrix(int n) 
    {
        
        int matrix[][]=new int[n][n];
              
        if (matrix.length == 0) {
            return matrix;
        }
        
        int rowBegin = 0;
        int rowEnd = matrix.length-1;
        int colBegin = 0;
        int colEnd = matrix[0].length - 1;
        
        int count=1;
        
        while (rowBegin <= rowEnd && colBegin <= colEnd && count<=n*n) {
            // Traverse Right
            for (int j = colBegin; j <= colEnd; j ++) {
                matrix[rowBegin][j]=count;
                count++;
            }
            rowBegin++;
            
            // Traverse Down
            for (int j = rowBegin; j <= rowEnd; j ++) {
                matrix[j][colEnd]=count;
                count++;
            }
            colEnd--;
            
            if (rowBegin <= rowEnd) {
                // Traverse Left
                for (int j = colEnd; j >= colBegin; j --) {
                    matrix[rowEnd][j]=count;
                    count++;
                }
            }
            rowEnd--;
            
            if (colBegin <= colEnd) {
                // Traver Up
                for (int j = rowEnd; j >= rowBegin; j --) {
                    matrix[j][colBegin]=count;
                    count++;
                }
            }
            colBegin ++;
        }
        
        return matrix;
    }
}

/*
ALGORITHM

We have to fill the matrix layer by layer in four direction.
From left to right ➡️:
the row will remain constant while column is updated till reaches n-1.
From Top to bottom ⬇️ (moving down)
The column will remain constant as n-1 and we will start filling from r1 + 1, as first row is filled in previous step & row will be updated.
From right to left ⬅️
we will start filling from c2 - 1 because c2 is filled in previous step.
so the row will be fixed and c2 will be updated from c2-1 till its greater than c1.
From botom to up ⬆️ (move up)
the column will be fixed as c1 while row will be updated form r2 till it greater than r1.
After that we will updates the row and column pointers, as now we will have to fill the inner layers.
ANALYSIS -:

TIME COMPLEXITY = O(N^2)
SPACE COMPLEXITY = O(1)
*/

/*
Input: n = 3
Output: [[1,2,3],[8,9,4],[7,6,5]]

Input: n = 1
Output: [[1]]
 
Constraints:
1 <= n <= 20

*/


