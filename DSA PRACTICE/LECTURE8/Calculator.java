// SwitchProblem:02 Calculator
import java.util.Scanner;

public class Calculator 
{
	public static void main(String[] args) 
	{
			Scanner obj=new Scanner(System.in);
			System.out.println("Enter first number");
			int a=obj.nextInt();
			System.out.println("Enter second number");
			int b=obj.nextInt();

			System.out.println("Enter the operation");
			String ch=obj.next();

			switch(ch)
		{
			case "+": System.out.print("a+b: "+(a+b));
						break;
			case "-": System.out.print("a-b: "+(a-b));
						break;
			case "/" : System.out.print("a/b: "+(a/b));
						break;
			case "*" : System.out.print("a*b: "+(a*b));
						break;
			case "%" : System.out.print("a%b: "+(a%b));
						break;
			default: System.out.print("Invalid operation");	
		}

	}
}



	
  