public class UpdateArray
{
	public static void update(int arr[], int n) // array ke case me hum main function se array ka copy na pass karke ham us array ka base address pass karte hai funtion me to value jab v function me update karenege to actual array me update ho jati hai
	{
		System.out.println("Inside the function");

		//Update the array 1st location 
		arr[0]=120;

		for(int i=0; i<n; i++)
		{
			System.out.print(arr[i]+" ");
		}
		System.out.println();

		System.out.println("Going to the main function");
	}

	public static void main(String[] args) 
	{
		int arr[]={1,2,3};

		update(arr,3);

		System.out.println("Printing in main function");
		for(int i=0; i<3; i++)
		{
			System.out.print(arr[i]+" ");
		}
	}
}





/*
OUTPUT:
Inside the function
120 2 3 
Going to the main function
Printing in main function
120 2 3 
*/