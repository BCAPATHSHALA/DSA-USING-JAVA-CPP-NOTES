//Pass by value
import java.util.Scanner;
public class PassByValue
{
    public static void dummy(int n ) 
    {
        n++;
        System.out.println("Number n: "+n);

    }
    public static void main(String[] args) 
    {
        Scanner obj=new Scanner(System.in);
        int n=obj.nextInt();

        dummy(n);
        System.out.println("Number n: "+n);
    }
}


/*
OUTPUT:
5
Number n: 6
Number n: 5
*/