////PROBLEM:03 >>>> Aggressive Cows: https://bit.ly/3dkuQ2B 

//code of Aggresive Cows minimum largest distance
bool isPossible(vector<int> &stalls, int k,int mid, int n)
{
    int cowCount=1; //cow counting K=1
    int lastPos=stalls[0];

    for(int i=0;i<n;i++)
    {
        if(stalls[i]-lastPos>=mid)
        {
            cowCount++; //cow counting K=2
            if(cowCount==k)
            {
                return true;
            }
            lastPos=stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
        sort(stalls.begin(),stalls.end()); //sort the array
        
        int start=0; //minimum value
        int n=stalls.size(); //size of the array
        int end=stalls[n-1]; //maximum value
        int ans=-1;
        int mid=start+(end-start)/2; //mid of the sorted array
        
        while(start<=end)
        {
            if(isPossible(stalls,k,mid,n))
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return ans;
}