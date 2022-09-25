// LOOP:04 Prime=1 and Not Prime=0
import java.util.Scanner;
public class LOOP4
{
	public static void isPrime(int n)
	{
		int prime=1;
		int i=2;

		if(n==1 || n<=0)
		{
			prime=0;
		}

		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				prime=0;-
				break;
			}
		}

		if(prime==0)
		{
			System.out.print("Not prime: "+prime);
		}
		else
		{
			System.out.print("prime: "+prime);
		}
	}

	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		isPrime(n);
	}
}
