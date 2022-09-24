#include<iostream>
using namespace std;


void  pattern(int n)
    {
        int i=1;
        while(i<=n)
        {
            int j=1;
            
            while(j<=n)
            {
                cout<<i<<" ";
                j++;
            }
            cout<<endl;
            i++;
        }
    }

int main() 
    {
       int n;
       cout<<"Enter the number"<<endl;
       cin>>n;

       pattern(n);
       return 0;
    }




/*OUTPUT:
Enter the number
4
1 1 1 1
2 2 2 2
3 3 3 3
4 4 4 4
*/