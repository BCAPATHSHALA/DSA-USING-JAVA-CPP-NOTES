/*
 * clockwise rotate(100% fast)
 * first transpose the matrix, then reverse in each row 
 * 1 2 3     1 4 7     7 4 1
 * 4 5 6  => 2 5 8  => 8 5 2
 * 7 8 9     3 6 9     9 6 3
*/
class Solution {
    public void rotate(int[][] matrix) {
           
        int rowSize=matrix.length;
        int colSize=matrix[0].length;
        
        // first transpose the matrix
        for(int i=0;i<rowSize;i++)
        {
            for(int j=i;j<colSize;j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        
        // reverse in each row         
        for(int i=0;i<rowSize;i++)
        {
            int low=0;
            int high=colSize-1;
            while(low<high)
            {
                int temp=matrix[i][low];
                matrix[i][low]=matrix[i][high];
                matrix[i][high]=temp;
                low++;
                high--;
            }
        }
        
        
    }
}