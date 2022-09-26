// SwitchProblem:02 Calculator
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter first number"<<endl;
	cin>>a;
	cout<<"Enter second number"<<endl;
	cin>>b;

	char ch;
	cout<<"Enter the operation"<<endl;
	cin>>ch;

	switch(ch)
	{
		case '+': cout<<"a+b: "<<a+b;
					break;
		case '-': cout<<"a-b: "<<a-b;
					break;
		case '/' : cout<<"a/b: "<<a/b;
					break;
		case '*' : cout<<"a*b: "<<a*b;
					break;
		case '%' : cout<<"a%b: "<<a%b;
				    break;
		default: cout<<"Invalid operation";	
	}
    return 0;
}