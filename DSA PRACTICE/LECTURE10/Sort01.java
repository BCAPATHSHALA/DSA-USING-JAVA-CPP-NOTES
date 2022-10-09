// sort0and1  with the help of two pointer approach
import java.util.Scanner;
class Sort01
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Eneter size of array");
		int size=sc.nextInt();

		int arr[]=new int[100];
		System.out.println("Input 0's and 1's");
		for(int i=0;i<size;i++)
		{
			arr[i]=sc.nextInt();
		}

		sort01(arr,size);
		printArray(arr,size);
	}

	public static void sort01(int arr[],int size)
	{
		int start=0, end=size-1;

		while(start<end)
		{
			while(arr[start]==0 && start<end)
			{
				start++;
			}
			while (arr[end]==1 && start<end) 
			{
				end--;
			}
			if(arr[start]==1 && arr[end]==0 && start<end)
			{
				int temp=arr[start];
				arr[start]=arr[end];
				arr[end]=temp;

				start++;
				end--;
			}
		}
	}

	public static void printArray(int arr[], int size)
	{
		System.out.print("Sorted array: ");
		for (int i=0;i<size;i++) 
		{
			System.out.print(arr[i]+" ");	
		}
	}
}

/*
OUTPUT:
Eneter size of array
5
Input 0's and 1's
1
1
0
0
1
Sorted array: 0 0 1 1 1
*/