#include <iostream>
using namespace std;

void fillOne(int arr[], int size)
{
	for(int i=0; i<size; i++)
	{
		if(arr[i]==0)
		{
			arr[i]=1;
		}
	}

	for(int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";
	}

}


int main()
{
	int arr[10]={1};

	fillOne(arr,10);

	return 0;
}

/*
OUTPUT:
1 1 1 1 1 1 1 1 1 1  when int arr[10]={1};
*/