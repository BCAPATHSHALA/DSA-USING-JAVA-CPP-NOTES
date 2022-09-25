//MCQ:05 on Unary Operator
#include<iostream>
using namespace std;

int main()
{
	int a=1;
	int b=a++; // a=1 output: b=1 and then a=2
	int c=++a; // c=3 and then a=3

	cout<<"b: "<<b;
	cout<<" a: "<<a;
}

/*
OUTPUT: 
b: 1 a: 3
*/