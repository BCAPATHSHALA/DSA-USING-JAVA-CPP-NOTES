// THIS IS BEST APPROACH:01 TO SOLVE THIS PROBLEM DUE TO RANGE OF DATA
import java.util.*;
class DecimalToBinary1
{

	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter decimal number: ");
		int n=sc.nextInt();
		String rem=" ";
		while (n!=0) 
		{
			int digit=n%2; 
			rem=digit+rem;
			n=n/2;			
		}
		System.out.print("Decimal to Binary: "+rem);
	}
}

/* ADVANTAGE OF THIS APPROACH
Enter decimal number: 1223456788
Decimal to Binary: 1001000111011000111100000010100
*/