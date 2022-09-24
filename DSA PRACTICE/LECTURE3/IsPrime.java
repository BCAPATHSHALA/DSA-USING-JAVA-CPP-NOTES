import java.util.Scanner;
public class IsPrime
{
	public static void main(String[] args) {

		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int i=2;

		if(n==1)
		{
			System.out.print("Not Prime Number");
			return;
		}

		while(i<n)
		{
			if(n%i==0)
			{
				System.out.print("Not Prime Number");
				return;
			}
			i++;
			
		}
		System.out.print("Is Prime Number");
		
	}
}