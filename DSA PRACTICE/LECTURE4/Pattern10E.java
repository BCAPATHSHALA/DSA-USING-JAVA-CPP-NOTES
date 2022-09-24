package patterns;
import java.util.*;

class Pattern10E
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

                System.out.print((i-j+1)+" ");
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

        Pattern10E.pattern(n);
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