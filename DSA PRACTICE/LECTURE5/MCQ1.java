//MCQ:01 on Unary Operator

public class MCQ1
{
	public static void main(String[] args) {
		int a,b=1;
		a=10;
		if(++a)
		{
			System.out.print("b: "+b);
		}
		else 
		{
			System.out.print("++b: "+b);	
		}
	}
}

/*
OUTPUT: MCQ1.java:8: error: incompatible types: int cannot be converted to boolean
                if(++a)
*/