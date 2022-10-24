// Class 02: Vector (Dynamic Array : contiguous storage allocation)

#include <iostream>
#include<vector>
using namespace std;
int main() 
{
  
  //Declaration of the vector integer type
  vector<int> v;

  //Declaration of the vector integer type with 
  //size=5 and initialization with 1 five time
  vector<int> a(5,1);

  //Declaration of the vector integer type and
  //assigning the vector a into b
  vector<int> b(a);
  
  cout<<"print b: ";
  for(int i:b) 
  {
    cout<<i<<" ";
  }cout<<endl;


  cout<<"Capacity: "<<v.capacity()<<endl;

  v.push_back(1);
  cout<<"Capacity: "<<v.capacity()<<endl;

  v.push_back(2);
  cout<<"Capacity: "<<v.capacity()<<endl;

  v.push_back(3);
  cout<<"Capacity: "<<v.capacity()<<endl;
  cout<<"Size: "<<v.size()<<endl;

  cout<<"Elemetn at 2nd Index: " <<v.at(2)<<endl;

  cout<<"front: " <<v.front()<<endl;
  cout<<"back: " <<v.back()<<endl;

  cout<<"before pop: ";
  for(int i:v) 
  {
    cout<<i<<" ";
  }cout<<endl;

  v.pop_back();

  cout<<"after pop: ";
  for(int i:v) 
  {
    cout<<i<<" ";
  }cout<<endl;

  cout<<"before clear size "<<v.size()<<endl;
  v.clear();
  cout<<"after clear size "<<v.size()<<endl;

  return 0;

}

/*
OUTPUT:
print b: 1 1 1 1 1 
Capacity: 0
Capacity: 1
Capacity: 2
Capacity: 4
Size: 3
Elemetn at 2nd Index: 3
front: 1
back: 3
before pop: 1 2 3 
after pop: 1 2 
before clear size 2
after clear size 0

*/


/*
Operations on array class:
__________________________
Capacity: 
1. size() – Returns the number of elements in the vector.
2. max_size() – Returns the maximum number of elements that the vector can hold.
3. capacity() – Returns the size of the storage space currently allocated to the vector expressed as number of elements.
4. empty() – Returns whether the container is empty.
5. reserve() – Requests that the vector capacity be at least enough to contain n elements.

Element access:
1. reference operator [g] – Returns a reference to the element at position ‘g’ in the vector
2. at(g) – Returns a reference to the element at position ‘g’ in the vector
3. front() – Returns a reference to the first element in the vector
4. back() – Returns a reference to the last element in the vector

Modifiers: 
1. push_back() – It push the elements into a vector from the back
2. pop_back() – It is used to pop or remove elements from a vector from the back.
3. insert() – It inserts new elements before the element at the specified position
4. erase() – It is used to remove elements from a container from the specified position or range.
5. swap() – It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
6. clear() – It is used to remove all the elements of the vector container
7. assign() – It assigns new value to the vector elements by replacing old ones

Some Method:
1. begin() – Returns an iterator pointing to the first element in the vector
2. end() – Returns an iterator pointing to the theoretical element that follows the last element in the vector
3. rbegin() – Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
4. rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)
5. cbegin() – Returns a constant iterator pointing to the first element in the vector.
6. cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the vector.
7. crbegin() – Returns a constant reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element
8. crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end)

____________________________________________________________
Reference Link: https://www.geeksforgeeks.org/vector-in-cpp-stl/
_____________________________________________________________
*/