package patterns;
import java.util.*;

class Pattern10
{

  public static void  pattern(int n)
    {
        int i=1;
        while(i<=n)
        {
            int j=1;
            int value=i;
            
            while(j<=i)
            {

                System.out.print(value+" ");
                value=value-1;
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

        Pattern10.pattern(n);
    }
}


/*OUTPUT:
Enter the number
4
1
2 1
3 2 1
4 3 2 1 
*/