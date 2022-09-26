// SwitchProblem:01

public class SwitchProblem
{
	public static void main(String[] args) 
	{
		int n=1;
		switch (n) 
		{
			case 1: System.out.print("Number First");
					break;
			case 2: System.out.print("Number Second");
					break;
			case '1' : System.out.print("Character First");
					break;
			// case "a" : System.out.print("String First");  error
			// 		break;
			default: System.out.print("Not match");	
		}
	}
}

/*
Number First
*/