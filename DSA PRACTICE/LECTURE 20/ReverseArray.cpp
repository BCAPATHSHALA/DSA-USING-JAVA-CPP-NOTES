// PROGRAM 01: REVERSE AN ARRAY(Code Studio Problem) 

#include <bits/stdc++.h> 
void reverseArray(vector<int> &arr , int m)
{
        int start=m+1;
        int end=arr.size()-1;
        while(start<=end)
        {         
            swap(arr[start], arr[end]);
            start++;
            end--;
        }  
}


/*
INPUT:
m=3
arr={1 2 3 4 5 6}

OUTPUT:
1 2 3 4 6 5

INPUT:
m=2
arr={10 9 8 7 6}

OUTPUT:
10 9 8 6 7

*/
// PROBLEM: https://bit.ly/3EOyAFz