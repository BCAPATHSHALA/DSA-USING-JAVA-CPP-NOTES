//Swap alternate elements of an array

class SwapAlternate
{
	public static void main(String[] args) {
		int arr[]={1,2,3,4,5};

		swapAlternate(arr);
		printArray(arr);
	}
	public static void swapAlternate(int arr[])
	{
		for(int i=0; i<arr.length;i=i+2)
		{
			if(arr.length>i+1)
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
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