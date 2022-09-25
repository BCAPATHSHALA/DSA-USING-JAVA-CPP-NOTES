import java.util.Scanner;

public class BitwiseOperator
{
	public static void main(String[] args) {
		Scanner sc=new Scanner(System.in);
		int x=sc.nextInt(); // X=2
		int y=sc.nextInt(); // Y=4
		int z=sc.nextInt(); // Z=-10
		int a=sc.nextInt(); // a=-5

		//Bitwise AND operator 
		System.out.println("x&y: "+(x&y)); // 0
		//Bitwise OR operator
		System.out.println("x|y: "+(x|y)); // 6
		//Bitwise XOR operator
		System.out.println("x^y: "+(x^y)); // 6
		//Bitwise NOT operator
		System.out.println("~x: "+(~x)); // -3

		//Bitwise Left shift operator
		System.out.println("x<<1: "+(x<<1)); // 4
		//Bitwise Right shift operator
		System.out.println("y>>1: "+(y>>1)); // 2
		//Bitwise Right shift operator
		System.out.println("z>>1: "+(z>>1)); // -5
		//Bitwise Right shift operator
		System.out.println("a>>1: "+(a>>2)); // -2


	}
}

/*OUTPUT:
x=2
y=4
x&y: 0
x|y: 6
x^y: 6
~x: -3
x<<1: 4
y>>1: 2
z>>1: -5
a>>1: -2
*/