#include <iostream>
using namespace std;

int main()
{
	int arr[10];

	// int size=(sizeof(arr)/sizeof(int));  OR
	int size=(sizeof(arr)/sizeof(size));

	cout<<size<<" Locations";
}

/*
OUTPUT: 10 Locations
*/