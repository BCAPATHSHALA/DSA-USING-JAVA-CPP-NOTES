// First and Last Position of an element in sorted array

class FirstAndLastPosition
{
	public static void main(String[] args) 
	{
		int arr[]={1,2,3,3,3,3,3,3,3,3,5};

		int leftMostIndex=firstPosition(arr,3);
		int rightMostIndex=lastPosition(arr,3);

		System.out.println("First index of 3: "+leftMostIndex);
		System.out.println("Last index of 3: "+rightMostIndex);
	}

	public static int firstPosition(int arr[],int key)
	{
		int size=arr.length;
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

	public static int lastPosition(int arr[],int key)
	{
		int size=arr.length;
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
}

/*
OUTPUT:
Fisrt index of 3: 2
Last index of 3: 9
*/