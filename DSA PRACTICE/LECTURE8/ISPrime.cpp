// isPrime
#include <iostream>
using namespace std;

bool isPrime(int n)
	{
		for(int i=2; i<n; i++)
		{
			if(n%2==0)
			{
				return 0;
			}
		}
		return 1;
	}


int main() 
	{
		int n;
		cin>>n;

		if(n==1 || n<=0)
		{
			cout<<"Is Not Prime Number"<<endl;
			return 0;
		}

		if(isPrime(n)) // or if(isPrime(n)==1)
		{
			cout<<"Is Prime Number"<<endl;
		}
		else
		{
			cout<<"Is Not Prime Number"<<endl;
		}

        return 0;
	}