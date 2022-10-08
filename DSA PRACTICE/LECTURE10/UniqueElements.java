// 2: Find the unique element from an array(Code Studio Problem)
import java.util.Scanner;
public class UniqueElements
{
	public static void uniqueElement(int arr[])
	{
		int ans=0;
		for (int i=0;i<arr.length;i++) 
		{
			ans=ans^arr[i];	
		}
		System.out.print("OUTPUT: "+ans);
	}
	
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the size: ");
		int size=sc.nextInt();

		int arr[]=new int[100];
		System.out.println("Enter the elements");
		for (int i=0;i<size;i++) 
		{
			arr[i]=sc.nextInt();	
		}

		uniqueElement(arr);
	}
}


/*
CODE STUDIO PROBLEM: Find Unique 
Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1
............................
Sample Input 2:
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7
Sample Output 2:
4
10

*/
