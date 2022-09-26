// isPrime
import java.util.Scanner;

public class ISPrime
{
	public static void main(String[] args) 
	{
		Scanner obj=new Scanner(System.in);
		int n=obj.nextInt();

		if(n==1 || n<=0)
		{
			System.out.print("Is Not Prime Number");
			return;
		}

		if(isPrime(n)) // or if(isPrime(n)==true)
		{
			System.out.print("Is Prime Number");
		}
		else
		{
			System.out.print("Is Not Prime Number");
		}
	}

	public static boolean isPrime(int n)
	{
		for(int i=2; i<n; i++)
		{
			if(n%2==0)
			{
				return false;
			}
		}
		return true;
	}
}