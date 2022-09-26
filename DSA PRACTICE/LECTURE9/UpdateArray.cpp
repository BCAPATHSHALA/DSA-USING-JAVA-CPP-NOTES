#include<iostream>
using namespace std;

void update(int arr[], int n) // array ke case me hum main function se array ka copy na pass karke ham us array ka base address pass karte hai funtion me to value jab v function me update karenege to actual array me update ho jati hai
{
	cout<<"Inside the function"<<endl;

	//Update the array 1st location 
	arr[0]=120;

	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	cout<<"Going to the main function"<<endl;
}

int main()
{
	int arr[3]={1,2,3};

	update(arr,3);

	cout<<"Printing in main function"<<endl;
	for(int i=0; i<3; i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}

/*
OUTPUT:
Inside the function
120 2 3 
Going to the main function
Printing in main function
120 2 3 
*/