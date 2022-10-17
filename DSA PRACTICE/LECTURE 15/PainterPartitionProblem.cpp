////PROBLEM:02 >>>> Painter's Partition Problem ( https://bit.ly/31v3Jiy )

bool isPossible(vector<int> &boards,int n,int k,int mid)
{
    int painters=1;
    int pageSUM=0;
    for(int i=0;i<n;i++)
    {
        if(pageSUM+boards[i]<=mid)
        {
            pageSUM+=boards[i];
        }
        else
        {
            painters++;
            if(painters>k || boards[i]>mid)
            {
                return false;
            }
            pageSUM=boards[i];
        }
    }
    return true;
}


int findLargestMinDistance(vector<int> &boards, int k)
{
    int n=boards.size();
    int start = 0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=boards[i];
    }
    int end=sum;
    int ans=-1;
    int mid=start+(end-start)/2;
    
    while(start<=end)
    {
        if(isPossible(boards,n,k,mid))
        {
            ans=mid;
            end=mid-1;
        }
        else // no solution
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}

/*
Example:1
Number of boards = 4 and Number of painters = 2

times[] = { 10,20,30,40}

OUTPUT: 60

Example:2 
Number of boards = 4 and Number of painters = 2

times[] = { 5,5,5,5}

OUTPUT: 10
*/