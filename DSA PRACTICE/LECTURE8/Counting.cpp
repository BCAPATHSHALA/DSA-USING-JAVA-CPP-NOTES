#include<iostream>
using namespace std;

void count(int n)
{
	int ans=0;
	for(int i=1; i<=n; i++)
	{
		ans=ans+i;;
	}
    cout<<ans<<endl;
	return;
}

int main()
{
	int a;
	cin>>a;

	count(a);
	return 0;
}