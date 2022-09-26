#include <iostream>
using namespace std;

void sumOfElement(int arr[], int size)
{
	int sum=0;
	for(int i=0; i<size; i++)
	{
		sum=sum+arr[i];
	}
	cout<<"Sum of all element: "<<sum<<endl;
	return;
}

int main()
{
	cout<<"Enter the size: ";
	int size;
	cin>>size;

	int arr[100];
	cout<<"Input the elements"<<endl;
	for(int i=0; i<size; i++)
	{
		cin>>arr[i];
	}

	sumOfElement(arr,size);

	return 0;

}


/*
Enter the size: 4
Input the elements
1
2
3
4
Sum of all element: 10
*/