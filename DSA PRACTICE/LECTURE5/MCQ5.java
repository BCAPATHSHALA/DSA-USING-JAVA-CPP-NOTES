//MCQ:05 on Unary Operator

public class MCQ5
{
	public static void main(String[] args) {
		int a=1;
		int b=a++; // a=1 output: b=1 and then a=2
		int c=++a; // c=3 and then a=3

		System.out.println("b: "+b); 
		System.out.println("a: "+a); 

	}
}

/*
OUTPUT: 
b: 1
a: 3
*/