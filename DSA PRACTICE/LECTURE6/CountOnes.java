// Counts 1 when input: 101010101 Output: 5
import java.util.*;

class CountOnes
{

	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter Binary number: ");
		int n=sc.nextInt();
		int ans=0;
		while (n!=1) 
		{
			int bit=n%10;
			if(bit==1)
			{
				ans++;
			}
			n=n/10;		
		}
		int fans= ++ans;
		System.out.print("Total 1's: "+fans);
	}
}


/*
Note: True=1

{
	int n=sc.nextInt();
	int ans=0;
	while (n!=1) 
			{
				
				if(n&1)
				{
					ans++;
				}
				n=n>>1;		
			}
	System.out.print("Total 1's: "+ans);
}


*/