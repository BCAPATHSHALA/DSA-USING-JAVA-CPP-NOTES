//Total number of set bit in a&b
#include<iostream>
using namespace std;

void bit(int a,int b)
{
    int aBit=0, bBit=0;
	while(a>0 || b>0)
	{
		if(a&1)
		{
			aBit=aBit+1;
		}
		if(b&1)
		{
			bBit=bBit+1;
		}
		a=a>>1;
		b=b>>1;
	}
	cout<<"Total 1's in a and b: "<<(aBit+bBit)<<endl;
	return; 
}

int main()
{
	int a,b;
	cin>>a>>b;

	bit(a,b);
    return 0;
}


/*
INPUT:
a=2 -> 01
b=3 -> 11

OUTPUT:
Total 1's= 3
*/ 