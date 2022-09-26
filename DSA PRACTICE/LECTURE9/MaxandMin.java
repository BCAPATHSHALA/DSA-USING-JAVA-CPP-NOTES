import java.util.Scanner;

public class MaxandMin
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

		getMax(num,size);
		getMin(num,size);
	}

	public static void getMax(int num[],int size)
	{
		int max=Integer.MIN_VALUE;
		for(int i=0;i<size;i++)
		{
			if(max<num[i])
			{
				max=num[i];
			}
		}
		System.out.println("Maximum value: "+max);
	}

	public static void getMin(int num[],int size)
	{
		int mix=Integer.MAX_VALUE;
		for(int i=0;i<size;i++)
		{
			if(mix>num[i])
			{
				mix=num[i];
			}
		}
		System.out.println("Minimum value: "+mix);
	}
}


/*
OUTPUT:
Enter the size: 5
Input the elements:
4
12
8
1
10
Maximum value: 12
Minimum value: 1
*/