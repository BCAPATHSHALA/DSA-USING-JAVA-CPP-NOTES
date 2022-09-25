//VarScopeMCQ:01

public class VarScopeMCQ1
{
	public static void main(String[] args) {
		int a=3;
		System.out.println(a);
		if(true)
		{
			System.out.println(a);
		}
	}
}

/*
3
3
*/