// LOOP:03 Fibonacci series
#include<iostream>
using namespace std;

void fibonacci(int n)
	{
		int a=0, b=1;
		int i=1;


		if(n==0)
		{
			return;
		}
		else if(n==1)
		{
			cout<<a<<" ";
			return;
		}
		else if(n==2) 
		{
			cout<<a<<" "<<b;
			return;
		}

		cout<<a<<" "<<b<<" ";
		while(i<n-1)
		{
			int nextNo=a+b;
			cout<<nextNo<<" ";
			a=b;
			b=nextNo;
			i++;
		}
	}

int main()
{
    int n;
    cin>>n;
    fibonacci(n);    
}

