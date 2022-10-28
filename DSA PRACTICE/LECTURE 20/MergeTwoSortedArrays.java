// PROGRAM 02: MERGE TWO SORTED ARRAYS
class MergeTwoSortedArrays{
	public static void main(String[] args) {
		
		int arr1[]={1,3,5,7,9};
		int arr2[]={2,4,6};

		int arr3[]=new int[8];

		mergeArrays(arr1,arr2,arr3);
		printArray(arr3);
	}

	public static void mergeArrays(int arr1[],int arr2[],int arr3[])
	{
		int i=0,j=0,k=0;
		int size1=arr1.length;
		int size2=arr2.length;

		//Merge Two Arrays
		while(i<size1 && j<size2)
		{
			if(arr1[i]<arr2[j])
			{
				arr3[k]=arr1[i];
				k++;
				i++;
			}
			else
			{
				arr3[k]=arr2[j];
				k++;
				j++;
			}
		}

		//Copy first arr1 in arr3
		while(i<size1)
		{
			arr3[k]=arr1[i];
			k++;
			i++;
		}

		//Copy second arr2 in arr3
		while(j<size2)
		{
			arr3[k]=arr1[j];
			k++;
			j++;
		}
	}


	public static void printArray(int arr3[])
	{
		for(int k=0;k<arr3.length;k++)
			{
				System.out.print(arr3[k]+" ");
			}
	}
}


/*
INPUT:
arr1={1,3,5,7,9}
arr2={2,4,6}

OUTPUT:
1 2 3 4 5 6 7 9

*/