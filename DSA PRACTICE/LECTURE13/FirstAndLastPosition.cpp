// 1. First and Last Position of an element in sorted array

#include<iostream>
using namespace std;

int firstPosition(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	int ans=-1;

	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			end=mid-1;
		}
		else if(arr[mid]>key)// goto left side
		{
			end=mid-1;
		}
		else if (arr[mid]<key)// goto right side
		{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}

int lastPosition(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	int ans=-1;

	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			start=mid+1;
		}
		else if(arr[mid]>key)// goto left side
		{
			end=mid-1;
		}
		else if (arr[mid]<key)// goto right side
		{
			start=mid+1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}

int main()
{
	int arr[11]={1,2,3,3,3,3,3,3,3,3,5};

	int leftMostIndex=firstPosition(arr,11,3);
	int rightMostIndex=lastPosition(arr,11,3);

	cout<<"Fisrt index of 3: "<<leftMostIndex<<endl;
	cout<<"Last index of 3: "<<rightMostIndex<<endl;
}


/*
OUTPUT:
Fisrt index of 3: 2
Last index of 3: 9
*/