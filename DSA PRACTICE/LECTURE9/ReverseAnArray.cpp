//My approach

#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{

	 for(int i=size-1; i>=0; i--)
	 {
	 	cout<<arr[i]<<" ";
	 }
	 return;
}

int main()
{
	int arr[10]={5,7,-2,10,22,-2,0,5,22,1};

	reverseArray(arr,10);
	return 0;
}


/*
OUTPUT:
1 22 5 0 -2 22 10 -2 7 5
*/