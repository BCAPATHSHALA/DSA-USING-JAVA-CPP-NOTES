// HOW INNER LOOP WORK
 class Test
 {
    public static void main(String[] args) 
    {
        System.out.println("main start ");
        for(int i=0; i<4; i++)
        {
            System.out.println(i+" start ");
            while(i<=3)
            {
               System.out.println(i+" While1 ");
               i++;
            }
            while(i>=4)
            {
              System.out.println(i+" While2 ");
              i--;
            }
             System.out.println(i+" end ");
        }
        System.out.println("main end ");
    }
 }
   

   /*
OUTPUT:
main start 
0 start 
0 While1 
1 While1 
2 While1 
3 While1 
4 While2 
3 end 
main end 

   */