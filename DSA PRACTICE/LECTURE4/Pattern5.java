package patterns;
import java.util.*;

class Pattern5
{

  public static void  pattern(int n)
    {
        int i=1;
        int count=1;
        while(i<=n)
        {
            int j=1;
            
            while(j<=n)
            {
                System.out.print(count+" ");
                count=count+1;
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

        Pattern5.pattern(n);
    }
}


/*OUTPUT:
Enter the number
3
123
456
789
*/