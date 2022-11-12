//3 - Fast exponential find=(x^n)%m
#include <bits/stdc++.h> 
#include <bits/stdc++.h> 
int modularExponentiation(int x, int n, int m) {
    
    int result=1;
    
    while(n>0)
    {
        if(n&1)//odd
        {
            result=( 1LL * (result) * (x) )%m;
        }
        
        x=(1LL* (x) * (x))%m;
        n=n>>1;// n/2
    }
    return result;
}

/*
INPUT: x=3 n=1 m=2
OUTPUT: 1

INPUT: x=4 n=3 m=10
OUTPUT: 4

INPUT: x=5 n=2 m=10
OUTPUT: 5

*/