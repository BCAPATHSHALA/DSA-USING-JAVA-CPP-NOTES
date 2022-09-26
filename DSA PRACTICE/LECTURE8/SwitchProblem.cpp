// SwitchProblem:01
#include<iostream>
using namespace std;

int main()
{
	int n=1;
	switch(n*2)
	{
		case 1: cout<<"Number First";
					break;
		case 2: cout<<"Number Second";
					break;
		case '1' : cout<<"Character First";
					break;
		// case "a" : cout<<"String First"; // invalid conversion
		// // 		break;
		default: cout<<"Not match";	
	}
    return 0;
}

/*
Number Second
*/