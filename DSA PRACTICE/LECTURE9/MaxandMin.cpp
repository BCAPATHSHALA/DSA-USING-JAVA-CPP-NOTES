#include <iostream>
using namespace std;


void getMax(int num[],int size)
	{
		int max=INT8_MIN;
		for(int i=0;i<size;i++)
		{
			// max = max(max, num[i]);
			if(max<num[i])
			{
				max=num[i];
			}
		}
		cout<<"Maximum value: "<<max<<endl;
        return;
	}

void getMin(int num[],int size)
	{
		int mix=INT8_MAX;
		for(int i=0;i<size;i++)
		{
			// min = min( min, num[i]);
			if(mix>num[i])
			{
				mix=num[i];
			}
		}
		cout<<"Minimum value: "<<mix<<endl;
        return;
	}


int main()
{
	cout<<"Enter the size: ";
	int size;
	cin>>size;

	int num[100];
	cout<<"Input the elements"<<endl;
	for(int i=0; i<size;i++)
	{
		cin>>num[i];
	}

	getMax(num,size);
	getMin(num,size);

    return 0;
}


/*
OUTPUT:
Enter the size: 5
Enter the elements:
4
12
8
1
10
Maximum value: 12
Minimum value: 1
*/