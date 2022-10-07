// Sort an array
class SortArray
{
	public static void main(String[] args) {
		// int arr[]={1,2,2,1,1,3};
		int arr[]={-3,0,1,-3,1,1,1,-3,10,0};

		sortArray(arr,9);
		printArray(arr);
	}

	public static void sortArray(int arr[],int size)
	{
		for(int i=0; i<size; i++)
		{

			for(int j=i+1;j<arr.length;j++)
			{
				if(arr[i]>arr[j])
				{
					int temp=arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		
	}

	public static void printArray(int arr[])
	{
		for(int i=0; i<arr.length;i++)
		{
			System.out.print(arr[i]+" ");
		}
	}
}

/*
OUTPUT:
-3 -3 -3 0 0 1 1 1 1 10 
*/