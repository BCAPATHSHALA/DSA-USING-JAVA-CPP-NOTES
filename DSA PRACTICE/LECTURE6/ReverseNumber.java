 import java.util.*;

 public class ReverseInteger{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the value");
        int x=sc.nextInt();
        System.out.print(reverse(x));
    }

       public int reverse(int x) {
        boolean isNegative = false;
        if (x < 0) {
            isNegative = true;
            x = -x;
        }
       long ans=0;
        while(x!=0)
        {
            ans=(ans*10)+x%10;
            x=x/10;
        }
        if(ans>Integer.MAX_VALUE)
        {
            return 0;
        }
        if(ans<Integer.MIN_VALUE)
        {
            return 0;
        }
        return (int)(isNegative ? -ans : ans);
    }  
 }