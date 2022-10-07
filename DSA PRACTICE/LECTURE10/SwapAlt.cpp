//1: Swap alternate elements in an array
#include<iostream>
using namespace std;

void swapElement(int num[],int size)
	{
		for(int i=0;i<size;i=i+2)
		{
            if (i+1<size)
            {
                swap(num[i],num[i+1]);
            }

		}
	}

void printAlternate(int num[], int size)
	{
		for (int i=0;i<size;i++) 
		{
			cout<<num[i]<<" ";	
		}
	}

int main()
{
	cout<<"Enter the size: ";
	int size;
	cin>>size;
	int num[100];

    for (int i=0;i<size;i++) 
		{
			cin>>num[i];
		}

	swapElement(num,size);
	printAlternate(num,size);
}


/*

Enter the size: 6
Input the elements: 1 2 3 4 5 6
2 1 4 3 6 5

Enter the size: 5
Input the elements: 1 2 3 4 5
2 1 4 3 5

*/
