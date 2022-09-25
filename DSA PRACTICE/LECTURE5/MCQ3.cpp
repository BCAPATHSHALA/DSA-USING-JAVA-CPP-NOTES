//MCQ:03 on Unary Operator

#include<iostream>
using namespace std;

int main()
{
	int a=1, b=2;
		if(a-->0 || ++b>2)
		{
			cout<<"Stage 01 inside if"<<endl;
		}
		else
		{
			cout<<"Stage 02 inside else"<<endl;
		}
		cout<<"a: "<<a<<" b "<<b<<endl;

		return 0;
}

/*
OUTPUT:
Stage 01 inside if
a: 0 b: 2
*/