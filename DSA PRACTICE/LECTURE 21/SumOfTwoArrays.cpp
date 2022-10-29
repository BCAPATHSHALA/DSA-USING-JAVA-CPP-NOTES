// PROGRAM 03: Sum Of Two Arrays (Code Studio Problem)
#include <bits/stdc++.h> 

//reverse ans vector
vector<int> reverse(vector<int>&ans)
{
    int start=0;
    int end=ans.size()-1;
    while(start<=end)
    {
        swap(ans[start],ans[end]);
        start++;
        end--;
    }
    
    return ans;
}

vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) 
{
	vector<int> ans;
    int i=n-1;
    int j=m-1;
    int carry=0;
    
    while(i>=0 && j>=0)
    {
        int sum=a[i]+b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }    
    //first case
    while(i>=0)
    {
        int sum=a[i]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        i--;
    }
    //second case
    while(j>=0)
    {
        int sum=b[j]+carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
     //third case
    while(carry!=0)
    {
        int sum=carry;
        carry=sum/10;
        sum=sum%10;
        ans.push_back(sum);
    }
    
    //print ans
    return reverse(ans);
}

/*
Case 01: 
INPUT: a[]={1,2,3,4} and b[]={6}
OUTPUT: {1,2,4,0}
EXPLAIN: a=1234 and b=6 then a+b=1240

Case 02: 
INPUT: a[]={6} and b[]={1,2,3,4}
OUTPUT: {1,2,4,0}
EXPLAIN: a=6 and b=1234 then a+b=1240

Case 03: 
INPUT: a[]={9,9,9} and b[]={9,9,9}
OUTPUT: {1,9,9,8}
EXPLAIN: a=999 and b=999 then a+b=1998

Time Complexities
3>  TC = O(n+m)
    SC = O (n+m)
*/