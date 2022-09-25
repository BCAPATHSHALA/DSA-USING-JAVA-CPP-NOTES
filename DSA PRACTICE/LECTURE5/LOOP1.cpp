//LOOP:01 

#include<iostream>
using namespace std;

int main()
{
	int n=4;
	int i=1;
	for( ; ; )
	{
		if(i<=n)
		{
			cout<<i<<endl;
		}
		else
		{
			break;
		}
		i++;
	}	
}

/*
OUTPUT:
1
2
3
4
*/