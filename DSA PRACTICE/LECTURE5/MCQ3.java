//MCQ:03 on Unary Operator

public class MCQ3
{
	public static void main(String[] args) {
		int a=1, b=2;
		if(a-->0 || ++b>2)
		{
			System.out.println("Stage 01 inside if");
		}
		else
		{
			System.out.println("Stage 02 inside else");
		}
		System.out.println("a: "+a+" b "+b);
	}
}

/*
OUTPUT:
Stage 01 inside if
a: 0 b: 2
*/