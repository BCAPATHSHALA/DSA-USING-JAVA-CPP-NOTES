import java.util.Scanner;

public class SumofN
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int i=1;
		int count=0;
		while(i<=n)
		{
			count+=i;
			i++;
		}
		System.out.print("SumofN: "+count);
	}
}