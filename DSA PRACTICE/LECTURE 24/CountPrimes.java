//PROGRAM : Count Primes (Leetcode 204)
class Solution {
    public int countPrimes(int n) 
    {
        int count=0;
        for(int i=1;i<n;i++)
        {
            if(isPrime(i))
            {
                count++;
            }
        }
        return count;
        
    }
    
    public static boolean isPrime(int i)
    {
        if(i<=0 || i==1)
        {
            return false;
        }
        
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                return false;
            }
        }
        return true;
    }
}

/*
OUTPUT:
Example 1:
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

Example 2:
Input: n = 0
Output: 0

Example 3:
Input: n = 1
Output: 0
*/