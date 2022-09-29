//Total number of set bit in a&b
import java.util.Scanner;
public class NumberOfBit
{
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Eneter the number a and b");
		int a=sc.nextInt(), b=sc.nextInt();

		bit(a,b);
	}

	public static void bit(int a,int b)
	{
	    int aBit=0, bBit=0;
		while(a>0 || b>0)
		{
			int aBit1=a&1, bBit1=b&1;
			if(aBit1==1)
			{
				aBit=aBit+1;
			}
			if(bBit1==1)
			{
				bBit=bBit+1;
			}
			a=a>>1;
			b=b>>1;
		}
		System.out.print("Total 1's in a and b: "+(aBit+bBit));
	}
}


/*
INPUT:
a=2 -> 01
b=3 -> 11

OUTPUT:
Total 1's= 3

.................
Eneter the number a and b
2
3
Total 1's in a and b: 3
*/ 