//1: Swap alternate elements in an array

import java.util.Scanner;

public class SwapAlt
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);

		System.out.print("Enter the size: ");
		int size=sc.nextInt();

		int num[]=new int[100];

		System.out.println("Input the elements: ");
		for(int i=0; i<size;i++)
		{
			num[i]=sc.nextInt();
		}

		swapElement(num,size);
		printAlternate(num,size);
	}

	public static void swapElement(int num[],int size)
	{
		for(int i=0;i<size;i=i+2)
		{
			int temp=0;
			if(i+1<size)
			{
				temp=num[i];
				num[i]=num[i+1];
				num[i+1]=temp; 
			}
		}
	}

	public static void printAlternate(int num[], int size)
	{
		for (int i=0;i<size;i++) 
		{
			System.out.print(num[i]+" ");	
		}
	}
}

/*

Enter the size: 6
Input the elements: 1 2 3 4 5 6
2 1 4 3 6 5

Enter the size: 5
Input the elements: 1 2 3 4 5
2 1 4 3 5

*/


