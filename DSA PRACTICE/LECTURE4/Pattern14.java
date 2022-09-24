// Most important pattern

package patterns;
import java.util.*;

class Pattern14
{

  public static void  pattern(int n)
    {
        int i=1;        
        while(i<=n)
        {
            int j=1; 
            char ch='A';          
            while(j<=n)
            {
                System.out.print((char)(ch+j+i-2)+" ");
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

        Pattern14.pattern(n);
    }
}

// i+j-1+ch-1=1+ch-1
// ch+i+j-2=A
/*OUTPUT:
Enter the number
3
A B C
B C D
C D E
*/