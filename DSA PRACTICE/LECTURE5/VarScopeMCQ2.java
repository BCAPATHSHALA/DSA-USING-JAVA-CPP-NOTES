//VarScopeMCQ:02

public class VarScopeMCQ2
{
	public static void main(String[] args) {
		int a=3;
		System.out.println(a);
		if(true)
		{
			int a=5;
			System.out.println(a);
		}
		System.out.println(a);
	}
}

/*
VarScopeMCQ2.java:10: error: variable a is already defined in method main(String[])
                        int a=5;
*/