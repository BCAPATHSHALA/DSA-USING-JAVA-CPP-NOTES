package patterns;
import java.util.*;

class Pattern8
{

  public static void  pattern(int n)
    {
        int i=1;
        int count=1;
        while(i<=n)
        {
            int j=1;
            
            while(j<=i)
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

        Pattern8.pattern(n);
    }
}


/*OUTPUT:
Enter the number
4
1
2 3
4 5 6
7 8 9 10
*/