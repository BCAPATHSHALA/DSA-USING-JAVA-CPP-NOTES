//PROGRAM 08: Search a 2D Matrix II (Leetcode 240)
/*
Time Complexity - O(Log n) where n=row * col
Space Complexity - O(1).

step01: 2D to 1D
step02: sort 1D
step03: binary search or linear to find the target value
*/

import java.util.Collections;
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
            int rowSize=matrix.length;
            int colSize=matrix[0].length;

            List<Integer> arr = new ArrayList<Integer>();

            // Step01: 2D to 1D arr
            for(int i=0;i<rowSize;i++)
            {
                for(int j=0;j<colSize;j++)
                {
                    arr.add(matrix[i][j]);
                }
            }

            // Step02: sort 1D arr
            Collections.sort(arr);

            // Step03: Binary Search

            int start=0;
            int end=(rowSize*colSize)-1;
            int mid=start+(end-start)/2;

            while(start<=end)
            {
                if(arr.get(mid)==target)  
                {
                    return true;
                }
                else if(arr.get(mid)<target)
                {
                    start=mid+1;
                }
                else if(arr.get(mid)>target)
                {
                    end=mid-1;
                }
                mid=start+(end-start)/2;
            }

            return false;

        
    }
}


/*
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

*/ 

// APPROACH:02
import java.util.Collections;
class Solution {
    public boolean searchMatrix(int[][] matrix, int target) {
        
        int rowSize=matrix.length;
        int colSize=matrix[0].length;
        
        int rowIndex=0;
        int colIndex=colSize-1;
        
        while(rowIndex<rowSize && colIndex>=0)
        {
            int element=matrix[rowIndex][colIndex];
            
            if(element==target)
            {
                return true;
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
        return false;
        

    }
}
