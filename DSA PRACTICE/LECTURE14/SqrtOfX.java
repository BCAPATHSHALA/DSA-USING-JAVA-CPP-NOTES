//69. Sqrt(x) leetcode 
// Approach:01 🗒️Time Complexity: O(log n)
class Solution {
public int mySqrt(int x) 
    {
        long start=1;
        long end=x;
        long ans=0;
        long mid=start+(end-start)/2;

        while(start<=end)
        {
            if(mid*mid<=x)
            {
                ans=mid;
                start=mid+1;
            }
            else if(mid*mid>x)
            {
                end=mid-1;
            }
            mid=start+(end-start)/2;
        }
        return (int)ans;
    }
}

// Approach:02 🗒️Time Complexity: O(log n)


class Solution {
     public int mySqrt(int x) {
        if(x <= 1) return x;
        int start = 1;
        int end = x/2;
        
        while(start < end) {
            int mid = (start + (end-start)/2) + 1;
            
            int div = x/mid;
            if(div == mid) return mid;
            if(div > mid) start = mid;
            else end = mid-1;
        }
        
        return start;
    }
}