// THIS IS APPROACH:01 input: 110 output: 6
import java.util.*;
import java.lang.*;

class BinaryToDecimal1
{

	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter Binary number: ");
		int n=sc.nextInt();
		int ans=0;
		int i=0;
		while (n!=0) 
		{
			int digit=n%10; 
			if(digit==1)
			ans=ans+(int)(Math.pow(2,i));
			n=n/10;
			i++;			
		}
		System.out.print("Binary to Decimal: "+ans);
	}
}