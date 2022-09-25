//MCQ:01 on Unary Operator
#include<iostream>
using namespace std;

int main()
{
	int a,b=1;
	a=10;
	if(++a) // true=1 and false=0
	{
		cout<<"b: "<<b<<endl;
	}
	else
	{
		cout<<"++b: "<<++b<<endl;
	}
	return 0;
}

/*
OUTPUT: b=1
*/