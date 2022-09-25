import java.util.Scanner;

public class UnaryOperator
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int i=sc.nextInt(); // i=4

		//Post increment operator
		int a=i++; // i=4 output: a=4 and then i is updated i=5
		//Pre increment operator
		int b=++i; // i=6 output: b=6 and then i is updated i=6
		//Post decrement operator
		int c=i--; // i=6 output: c=6 and then i is updated i=5
		//Pre decrement operator
		int d=--i; // i=4 output: d=4 and then i is updated i=4

		System.out.println("a= "+a);
		System.out.println("b= "+b);
		System.out.println("c= "+c);
		System.out.println("d= "+d);
	}
}

/*
OUTPUT:
i=4
a= 4
b= 6
c= 6
d= 4
*/