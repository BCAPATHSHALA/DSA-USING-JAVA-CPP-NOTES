//Total number of set bit in a
#include<iostream>
using namespace std;

void bit(int a)
{
    int abit=0;
	while(a>0)
	{
		if(a&1)
		{
			abit=abit+1;
		}
		a=a>>1;
	}
    cout<<abit;
	
}

int main()
{
	int a;
	cin>>a;

	bit(a);
    return 0;
}


/*
INPUT:
a=2 -> 01

OUTPUT:
Total 1's= 1
*/ 