// Reverse an Array Using Swapping (For Loop)
import java.util.Scanner;

class ReverseArray
{
	public static void reverseArray(int arr[],int size)
	{
		int start, end=size-1, temp=0;

		for(start=0; start<size/2; start++)
		{
			temp=arr[start];
			arr[start]=arr[end-start];
			arr[end-start]=temp;
		}
	}

	public static void printArray(int arr[],int size)
	{
		for(int i=0;i<size;i++)
		{
			System.out.print(arr[i]+" ");
		}
	}

	public static void main(String[] args)
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the size: ");
		int size=sc.nextInt();

		System.out.println("Input the elements");
		int arr[]=new int[100];

		for(int i=0;i<size;i++)
		{
			arr[i]=sc.nextInt();
		}

		reverseArray(arr,size);
		printArray(arr,size);
	}
}

/*
OUTPUT:
Enter the size: 5
Input the elements
1
2
3
4
5
5 4 3 2 1
OUTPUT:
Enter the size: 4
Input the elements
1
2
3
4
4 3 2 1
*/