//PROGRAM:01 Count Primes (Leetcode 204)
/*
Optimal solution: TC=N*log(log*N)
Sieve of Eratosthenes Algorithms
Step01: Assume that all number are prime
Step02: Find prime number and remove the multiple of prime number until n-1
*/
class Solution {
public:
    int countPrimes(int n) // when n=40
    {
        
        int count=0;
        vector<bool> prime(n+1,true);
        
        prime[0]=prime[1]=false;
        
        for(int i=2;i<n;i++)
        {
            if(prime[i])
            {
                count++;
                
                for(int j=2*i;j<n;j=j+i) //i=2 j= 4 6 8 10 12 14 16 18 20 22 24 26 28 30 32 34 36 28=false
                                         //i=3 j= 6 9 12 15 18 27 30 33 36 39=false
                                         //i=5 j= 10 15 20 25 30 35=fasle
                                         //i=7 j= 14 21 28 35=false
                                         //i=11 j=22 33=false
                                         //i=13 j=26 39=false
                                         //i=17 j=34=false
                                         //i=19 j=38=false
                                         //i=23 
                                         //i=29
                                         //i=31
                                         //i=37
                {
                    prime[j]=0;
                }
            }
        }
        return count;
    }
};

//Not Optimal Solution TC=O(n)
class Solution {
public:
    int countPrimes(int n) 
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
    
    bool isPrime(int i)
    {
        if(i<=0 || i==1)
        {
            return 0;
        }
        
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {
                return 0;
            }
        }
        return 1;
    }
};

/*
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

Example 4:
Input: n = 40
Output: 12
*/