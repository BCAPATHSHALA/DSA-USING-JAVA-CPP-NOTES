#include <iostream>
using namespace std;

void findElement(int arr[], int size, int element)
{

	 for(int i=0; i<size; i++)
	 {
	 	if(element==arr[i])
	 	{
	 		cout<<"Yes, "<<element<<" at index "<<i<<endl;
	 		return;
	 	}

	 }
	 cout<<"No"<<endl;
	
}

int main()
{
	int arr[10]={5,7,-2,10,22,-2,0,5,22,1};

	cout<<"Enter the elements"<<endl;
	int element;
	cin>>element;

	findElement(arr,10,element);

	return 0;
}


/*
OUTPUT:
Enter the elements
2
No
OUTPUT:
Enter the elements
1
Yes, 1 at index 9
*/