package patterns;
import java.util.*;

class Pattern18 
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
                System.out.print((char)(ch+n-i)+" ");
                ch=(char)(ch+1);
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

        Pattern18.pattern(n);
    }
}


/*OUTPUT:
Enter the number
4
D
C D
B C D
A B C D
*/