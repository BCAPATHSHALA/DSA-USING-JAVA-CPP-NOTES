// Practice question on increment and decrement operator

#include<iostream>
using namespace std;

int main()
{
	int i=7;
	cout<<(++i)<<endl; // i=8 output: 8
	cout<<(i++)<<endl; // i=8 output: 8 then i=9
	cout<<(i--)<<endl; // i=9 output: 9 then i=8
	cout<<(--i)<<endl; // i=7 output: 7 
}

/*
OUTPUT:
8
8
9
7
*/