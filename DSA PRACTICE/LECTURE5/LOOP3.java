// LOOP:03 Fibonacci series
import java.util.Scanner;
public class LOOP3
{
	public static void fibonacci(int n)
	{
		int a=0, b=1;
		int i=1;


		if(n==0)
		{
			return;
		}
		else if(n==1)
		{
			System.out.print(a+" ");
			return;
		}
		else if(n==2) 
		{
			System.out.print(a+" "+b);
			return;
		}

		System.out.print(a+" "+b+" ");
		while(i<n-1)
		{
			int nextNo=a+b;
			System.out.print(nextNo+" ");
			a=b;
			b=nextNo;
			i++;
		}
	}


	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		fibonacci(n);
	}
}



