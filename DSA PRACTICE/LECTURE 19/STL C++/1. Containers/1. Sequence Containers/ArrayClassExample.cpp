// Class 01: Arrays (Static Array)

#include <iostream>
#include<array>

using namespace std;
int main() 
{
  
  int basic[3] ={1,2,3};

  array<int,4> a = {1,2,3,4};

  int size = a.size();

  for(int i=0;i<size;i++ )
  { 
    cout<<a[i]<<" ";
  }
  cout<<endl;

  cout<<"Element at 2 nd Index: "<<a.at(2)<<endl;

  cout<<"Empty or not: "<<a.empty()<<endl;

  cout<<"First Element: "<<a.front()<<endl;
  cout<<"last Element: "<<a.back()<<endl;
  cout<<"Maximum Element: "<<a.max_size()<<endl;
  cout<<"Array Class Size: "<<a.size()<<endl;

  return 0;

}

/*
OUTPUT:
1 2 3 4 
Element at 2 nd Index: 3
Empty or not: 0
First Element: 1
last Element: 4
Maximum Element: 4
Array Class Size: 4
*/


/*
Operations on array class:
__________________________

1. at() :- This function is used to access the elements of array. 
2. get() :- This function is also used to access the elements of array. 
      This function is not the member of array class but overloaded function from class tuple. 

3. operator[] :- This is similar to C-style arrays. This method is also used to access array elements.
4. front() :- This returns the first element of array. 
5. back() :- This returns the last element of array.
6. size() :- It returns the number of elements in array. This is a property that C-style arrays lack. 
7. max_size() :- It returns the maximum number of elements array can hold i.e, the size with which array is declared.            The size() and max_size() return the same value.

8. swap() :- The swap() swaps all elements of one array with other.
9. empty() :- This function returns true when the array size is zero else returns false. 
10. fill() :- This function is used to fill the entire array with a particular value.
____________________________________________________________
Reference Link: https://www.geeksforgeeks.org/array-class-c/
_____________________________________________________________
*/