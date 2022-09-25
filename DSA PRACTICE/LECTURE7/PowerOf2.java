import java.util.*;
public class PowerOf2 
{

    public boolean isPowerOfTwo(int n) 
    {
        
        if(n%2==0)
        {
            int x=n;
            while(x>=1)
            {
                x=x/2;
            }
            if(x==1)
            {
                return true;
            }
            else 
            {
                return false;    
            }
        }
        else if(n==1)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }

    public static void main(String[] args) 
    {
        PowerOf2 obj=new PowerOf2();
        System.out.println("Enter the number");
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.print(obj.isPowerOfTwo(n));
    }
}