//Get Pivot index (Minimum value in an sorted and rotated array) Time Complexity: O(log n)
#include<iostream>
using namespace std;

int getPivot(int arr[], int n)
{
	int s=0;
	int e=n-1;
	int mid = s+(e-s)/2;

	while(s<e)
	{
		if(arr[mid]>=arr[0])
		{
			s=mid+1;
		}
		else if(arr[mid]<=arr[0])
		{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return e;
}

int main()
{
	// int arr[5]={8,10,17,1,3};
	int arr[5]={1,3,8,10,17};
	cout<<"Pivot is : "<<getPivot(arr,5)<<endl;
	return 0;
}