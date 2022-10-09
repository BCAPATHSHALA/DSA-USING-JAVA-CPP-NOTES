// BROUTE FORCE SOLUTION:
..........................................................................
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {

  vector< vector<int> > ans;

   for (int i = 0; i < n-2; i++){
      for (int j = i+1; j < n-1; j++){     
          for (int k = j+1; k < n; k++){
              vector<int> temp;
              if (arr[i] + arr[j] + arr[k] == K){
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(),temp.end());

                    if(find(ans.begin(),ans.end(),temp)==ans.end()){
                         ans.push_back(temp);
                     } 
              }
          }

       }

    }

   return ans;

}


//OPTIMAL SOLUTION:01
..........................................................................
#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
   //two pointer approch ,we will fix arr[i]
   vector<vector<int>>ans;
   sort(arr.begin(),arr.end());
   for(int i=0; i<n; i++)
   {
       int s=i+1;
       int e=n-1;
       while(s<e)
       {
           if(arr[i]+arr[s]+arr[e]==K)
           {
               ans.push_back({arr[i],arr[s],arr[e]});
               while(s<e && arr[s]==arr[s+1])s++; //to remove duplicate from start
               while(s<e && arr[e]==arr[e-1])e--; //to remove duplicate from end
               s++;
               e--;
           }
           else if(arr[i]+arr[s]+arr[e]>K)
           {
               e--;
           }
           else
           {
               s++;
           }
       }
       while(i+1<n && arr[i]==arr[i+1]) //to remove duplicates within the loop //hence decreasing the overall time taken
       {
           i++;
       }
   }
   return ans;
}

//OPTIMAL SOLUTION:02
..........................................................................................................

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {

   vector<vector<int>> ans;
   sort(arr.begin(), arr.end());
       
       for(int i=0;i<n-2;i++)
       {
           
           if(i==0||i>0 &&(arr[i]!=arr[i-1])) //to remove duplicates within the loop , 
               //hence decreasing the overall time taken
           {
               int low=i+1;
               int high=n-1;
               while(low<high)
               {
                   if(arr[low]+arr[high]+arr[i]==K)
                   {
                       vector<int>temp;
                       temp.push_back(arr[low]);
                       temp.push_back(arr[high]);
                       temp.push_back(arr[i]);
                       ans.push_back(temp);
                       
                       while(low<high && arr[low]==arr[low+1])//removing duplicates from start
                           low++;
                       while(low<high && arr[high]==arr[high-1])//removing duplicates from end
                           high--;
                       
                       low++;
                       high--;
                   }
                   else if(arr[low]+arr[high]+arr[i]<K)
                       low++;
                   else high--;
               } 
           }
          
       
           
       }
           return ans;
}

//OPTIMAL SOLUTION:03
.............................................................................................................


vector<vector<int>> ans;
    
    //sort first so it becomes easy
    sort(arr.begin(), arr.end());
    int left,right;	//2ptr approach
    for(int i=0; i<n; i++){
        left = i+1;
        right = n-1;
        //terminary condn
        while(left<right){
            //check for sum, here we fix arr[i], and then form 2 pair sum over remaining elements of array
            if(arr[i] + arr[left] + arr[right] == K){
                //we got it, push it back
                ans.push_back({arr[i], arr[left], arr[right]});
                int x = arr[left];
                int y = arr[right];
                //skipping the same returned elements of left and right if they are present in duplicate form
                while(left<right && arr[left] == x){
                    left++;
                }
                while(left<right && arr[right] ==y){
                    right--;
                }
            } //if end
            //if not match then in else cases move left/right pointer as per condition
            else if(arr[i] + arr[left] + arr[right] < K){
                left++;
            }
            else{
                //arr[i] + arr[left] + arr[right] > K
                right--;
            }
        }//while end
        //we need to skip duplicates of arr[i], ith element if present
        while(i+1<n && arr[i]==arr[i+1]){
            i++;
        }
    }//for end
    return ans;