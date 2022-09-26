#include <iostream>
using namespace std;

int main()
{
	int arr[10]={0};

	for(int i=0; i<10; i++)
	{
		cout<<arr[i]<<" ";
	}

	return 0;
}

/*
OUTPUT:
1 0 0 0 0 0 0 0 0 0  when int arr[10]={1};

OUTPUT:
0 0 0 0 0 0 0 0 0 0  when int arr[10]={0};
*/