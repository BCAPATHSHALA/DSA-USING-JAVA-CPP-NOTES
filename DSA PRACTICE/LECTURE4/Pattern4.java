package patterns;
import java.util.*;

class Pattern4
{

  public static void  pattern(int n)
    {
        int i=1;
        while(i<=n)
        {
            int j=1;
            
            while(j<=n)
            {
                System.out.print(n-j+1);
                j++;
            }
            System.out.println();
            i++;
        }
    }

    public static void main(String[] args) 
    {
        Scanner obj=new Scanner(System.in);
        System.out.println("Enter the number");
        int n=obj.nextInt();

        Pattern4.pattern(n);
    }
}


/*OUTPUT:
Enter the number
4
4321
4321
4321
4321
*/