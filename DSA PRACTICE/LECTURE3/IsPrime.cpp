#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int i=2;

	if(n==1)
	{
		cout<<"Not Prime Number"<<endl;
		return 0;
	}

	while(i<n)
	{
		if(n%i==0)
		{
			cout<<"Not Prime Number"<<endl;
			return 0;
		}
		i++;
	}
	cout<<"Is Prime Number"<<endl;
}