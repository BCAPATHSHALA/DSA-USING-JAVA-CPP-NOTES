// LOOP:04 Prime=1 and Not Prime=0
#include<iostream>
using namespace std;

void isPrime(int n)
	{
		bool prime=1;
		int i=2;

		if(n==1 || n<=0)
		{
			prime=0;
		}

		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				prime=0;
				break;
			}
		}

		if(prime==0)
		{
			cout<<"not prime: "<<prime;
		}
		else
		{
			cout<<"prime: "<<prime;
		}
	}

int main()
{
    int n;
    cin>>n;
    isPrime(n);    
}

