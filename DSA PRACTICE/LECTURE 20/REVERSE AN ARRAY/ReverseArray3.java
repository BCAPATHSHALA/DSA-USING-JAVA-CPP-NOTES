// Reverse Array:03
// Reverse an Array Using Swapping (While Loop) 
import java.util.Scanner;

class ReverseArray3
{
	public static void reverseArray(int arr[],int size)
	{
		int n=size-1;
		while(n>=0)
		{
			System.out.print(arr[n]+" ");
			--n;
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