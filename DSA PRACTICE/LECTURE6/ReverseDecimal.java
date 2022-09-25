// REVERSE THE DIGIT OF GIVEN NUMBER input: 123 output: 321
import java.util.*;

class ReverseDecimal
{

	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter decimal number: ");
		int n=sc.nextInt();
		int ans=0;
		while (n!=0) 
		{
			int digit=n%10; 
			ans=(10*ans)+digit; // reverse flow
			n=n/10;		
		}
		System.out.print("Decimal Reverse Flow: "+ans);
	}
}