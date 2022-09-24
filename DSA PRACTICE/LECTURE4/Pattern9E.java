package patterns;
import java.util.*;

class Pattern9E
{

  public static void  pattern(int n)
    {
        int i=1;
        while(i<=n)
        {
            int j=1;            
            while(j<=i)
            {

                System.out.print(i+j-1+" ");
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

        Pattern9E.pattern(n);
    }
}


/*OUTPUT:
Enter the number
4
1
2 3
3 4 5
4 5 6 7
*/