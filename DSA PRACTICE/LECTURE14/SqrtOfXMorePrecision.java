// Square root of the any decimal number
import java.util.Scanner;
public class SqrtOfXMorePrecision
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the number: ");
		int n=sc.nextInt();
		System.out.print("Enter the precision number: ");
		int precision=sc.nextInt();

		int imptSol=sqrtOfX(n);
		double result=morePrecision(n,precision,imptSol);
		System.out.println(result);

	}

	public static int sqrtOfX(int n)
	{
		long s=0;
		long e=n;
		long mid=s+(e-s)/2;

		long ans=0;
		while(s<=e)
		{
			long squareRoot=mid*mid;
			if(squareRoot==n)
			{
				return (int)mid;
			}

			if(squareRoot>n)
			{
				e=mid-1;
			}
			else if(squareRoot<n)
			{
				ans=mid;
				s=mid+1;
			}
			mid=s+(e-s)/2;
		}
		return (int)ans;

	}

	public static double morePrecision(int n,int precision,int imptSol)
	{
	    double factor = 1;
	    double ans = imptSol;

	    for(int i=0; i<precision; i++) 
	    {
	        factor = factor/10;

	        for(double j=ans; j*j<n; j= j+factor )
	        {
	            ans = j;
	        }
	    }
	    return ans;

	}
}