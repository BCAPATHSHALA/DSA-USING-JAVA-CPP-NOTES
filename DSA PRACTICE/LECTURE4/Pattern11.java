package patterns;
import java.util.*;

class Pattern11
{

  public static void  pattern(int n)
    {
        int i=1;
        while(i<=n)
        {
            int j=1;
            int value=64;
            
            while(j<=n)
            {

                System.out.print(((char)(value+i))+" ");
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

        Pattern11.pattern(n);
    }
}


/*OUTPUT:
Enter the number
3
A A A
B B B
C C C
*/