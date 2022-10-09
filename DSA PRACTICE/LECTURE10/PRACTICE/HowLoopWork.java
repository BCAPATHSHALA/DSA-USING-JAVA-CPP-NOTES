// HOW LOOP WORK

class HowLoopWork
{
	public static void main(String[] args) 
	{
		int arr[]={1,2,3,4,5};

		printArray(arr);
	}

	public static void printArray(int arr[])
	{
		int stepi=0;
		for (int i=0;i<arr.length;i++) 
		{
			int stepj=0;
			System.out.println("stepi: "+(stepi++));
			for (int j=i+1;j<arr.length;j++) 
			{
				for (int k=j+1;k<arr.length;k++) 
				{
					System.out.println(arr[i]+" "+arr[j]+" "+arr[k]);	
				}	
				System.out.println("stepj: "+(stepj++));
			}
			System.out.println(" ");	
		}
	}
}


/*
WORKING OF LOOP OUTPUT:

stepi: 0
1 2 3
1 2 4
1 2 5
stepj: 0
1 3 4
1 3 5
stepj: 1
1 4 5
stepj: 2
stepj: 3

stepi: 1
2 3 4
2 3 5
stepj: 0
2 4 5
stepj: 1
stepj: 2

stepi: 2
3 4 5
stepj: 0
stepj: 1

stepi: 3
stepj: 0

stepi: 4

*/