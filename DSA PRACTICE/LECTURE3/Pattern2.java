package patterns;
import java.util.*;

class Pattern2
{

  public static void  pattern(int n)
    {
        int i=1;
        while(i<=n)
        {
            int j=1;
            
            while(j<=n)
            {
                System.out.print(i);
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

        Pattern2.pattern(n);
    }
}


/*OUTPUT:
Enter the number
4
1111
2222
3333
4444
*/