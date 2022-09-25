//VarScopeMCQ:04

public class VarScopeMCQ3
{
	public static void main(String[] args) {
		int a=3;
		System.out.println(a);
		if(true)
		{
			int b=5;
			System.out.println(b);
		}
		int b=1;
		System.out.print(b);
	}
}

/*
Compile time error
*/