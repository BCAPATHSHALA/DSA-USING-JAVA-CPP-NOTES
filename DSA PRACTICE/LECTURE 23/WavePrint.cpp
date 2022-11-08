//PROGRAM 04: Print Like A Wave (Code Studio)
//Time Complexity: O(Row*Col) 

#include <bits/stdc++.h> 
vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    vector<int> ans;
    for(int col=0;col<mCols;col++)
        {
            int odd=col&1;
            if(odd==1)//Odd Index : B to T
            {
                for(int row=nRows-1;row>=0;row--)
                {
                    ans.push_back(arr[row][col]);
                }
            }
            else//Even Index or 0: T to B
            {
                for(int row=0;row<nRows;row++)
                {
                    ans.push_back(arr[row][col]);
                }
            }
        }
        
        
        return ans;
    
}

/*
INPUT:
row=3 and col=4
1 2 3 4
5 6 7 8
9 10 11 12

OUTPUT:1 5 9 10 6 2 3 7 11 12 8 4

*/
