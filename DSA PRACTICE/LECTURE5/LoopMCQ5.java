//LoopMCQ:05

public class LoopMCQ5
{
	public static void main(String[] args) {
		for(int i=0; i<=5; i++)
		{
			for(int j=i; j<=5; j++)
			{
				if(i+j==10)
				{
					break;
				}
				System.out.print(i+" "+j+" ");
			}
			System.out.println();
		}
	}
}


/*
0 0 0 1 0 2 0 3 0 4 0 5
1 1 1 2 1 3 1 4 1 5
2 2 2 3 2 4 2 5
3 3 3 4 3 5 
4 4 4 5
*/