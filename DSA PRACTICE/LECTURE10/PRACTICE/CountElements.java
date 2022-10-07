//Counts sorted array's elements

class CountElements
{
	public static void main(String[] args) {
		int arr[]={1,1,1,2,2,3};

		countElements(arr);
	}

	public static void countElements(int arr[])
	{
		int i=0;
		while(i<arr.length)
		{
			int count=1;
			for(int j=i+1;j<arr.length;j++)
			{
				if(arr[j]==arr[i])
				{
					count=count+1;
				}
			}
			System.out.println(arr[i]+" : "+count);
			i=i+count;
		}
		
	}
}

/*
OUTPUT:
1 : 3
2 : 2
3 : 1
*/