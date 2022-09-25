//VarScopeMCQ:02

#include<iostream>
using namespace std;

int main()
{
		int a=3;
		cout<<a<<endl;
		if(true)
		{
			int a=5;
			cout<<a<<endl;
		}
		cout<<a<<endl;
}


/*
3
5
3
*/