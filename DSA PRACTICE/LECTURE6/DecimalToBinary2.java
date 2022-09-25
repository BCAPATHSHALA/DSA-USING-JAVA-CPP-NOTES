// THIS IS APPROACH:02 input: 10 output: 1010
import java.util.*;
import java.lang.*;

class DecimalToBinary2
{

	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter decimal number: ");
		int n=sc.nextInt();
		int ans=0;
		int i=0;
		while (n!=0) 
		{
			int bit=n&1; 
			ans=(int)(bit*Math.pow(10,i))+ans;
			n=n>>1;
			i++;			
		}
		System.out.print("Decimal to Binary: "+ans);
	}
}

/* DISADVANTAGE OF THIS APPROACH
Enter decimal number: 1223456788
Decimal to Binary: -2147473559
*/