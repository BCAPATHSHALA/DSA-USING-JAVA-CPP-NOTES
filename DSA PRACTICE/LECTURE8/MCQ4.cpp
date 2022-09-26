#include<iostream>
using namespace std;

int update(int a)
{
	int ans=a*a;
	return ans;
}

int main()
{
	int a=4;
	a = update(a);
	cout<<"a: "<<a<<endl;
}


/*same as java code
OUTPUT:
a: 16
*/ 