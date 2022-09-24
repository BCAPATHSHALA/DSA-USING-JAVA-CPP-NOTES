import java.util.Scanner;
public class SumofNEven
{
	public static void main(String[] args) {

		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int sum=0;

		int i=1;
		while(i<=n)
		{
			if(i%2==0)
			{
				sum=sum+i;
			}
			i=i+1;
			
		}
		System.out.print("Sum of N even number: "+sum);
		
	}
}