package patterns;
import java.util.*;

class Pattern17
{

  public static void  pattern(int n)
    {
        int i=1;        
        while(i<=n)
        {
            int j=1;    
            char ch='A';       
            while(j<=i)
            {
                System.out.print((char)(ch+i+j-2)+" ");
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

        Pattern17.pattern(n);
    }
}


/*OUTPUT:
Enter the number
3
A 
B C
C D E
*/