// PROGRAM 02: MERGE TWO SORTED ARRAYS

#include <iostream>
using namespace std;

void mergeArrays(int arr1[],int n1, int arr2[],int n2, int arr3[])
{
		int i=0,j=0,k=0;
		int size1=n1;
		int size2=n2;

		//Merge Two Arrays
		while(i<size1 && j<size2)
		{
			if(arr1[i]<arr2[j])
			{
				arr3[k]=arr1[i];
				k++;
				i++;
			}
			else
			{
				arr3[k]=arr2[j];
				k++;
				j++;
			}
		}

		//Copy first arr1 in arr3
		while(i<size1)
		{
			arr3[k]=arr1[i];
			k++;
			i++;
		}

		//Copy second arr2 in arr3
		while(j<size2)
		{
			arr3[k]=arr1[j];
			k++;
			j++;
		}
	}

void printArray(int arr3[],int n3)
{
	for(int k=0;k<n3;k++)
	{
		cout<<arr3[k]<<" ";
	}
}

int main() 
{
		
	int arr1[5]={1,3,5,7,9};
	int arr2[3]={2,4,6};

	int arr3[8]={0};

	mergeArrays(arr1,5,arr2,3,arr3);
	printArray(arr3,8);
}

/*
INPUT:
arr1={1,3,5,7,9}
arr2={2,4,6}

OUTPUT:
1 2 3 4 5 6 7 9

*/