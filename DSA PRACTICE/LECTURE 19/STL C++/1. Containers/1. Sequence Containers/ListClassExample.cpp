// Class 04: List (Dynamic Array:non-contiguous memory allocation)

#include <iostream>
#include<list>
using namespace std;
int main() 
{
    list<int> l;

    list<int> n(5,100);
    cout<<"Printing n: ";
    for(int i:n) 
    {
      cout<<i<<" ";
    }cout<<endl;
    
    l.push_back(1);
    l.push_front(2);

    cout<<"Printing l: ";
    for(int i:l) 
    {
      cout<<i<<" ";
    } cout<<endl;
    
    l.erase(l.begin());
    cout<<"after erase: ";
    for(int i:l) 
    {
      cout<<i<<" ";
    }cout<<endl;

    cout<<"size of list: "<<l.size();

  
  return 0;

}

/*
OUTPUT:
Printing n: 100 100 100 100 100 
Printing l: 2 1 
after erase: 1 
size of list: 1
*/


/*
Operations on list class:
__________________________
Capacity: 
1. size() – Returns the number of elements in the list.
2. max_size() – Returns the maximum number of elements that the list can hold.
3. capacity() – Returns the size of the storage space currently allocated to the list expressed as number of elements.
4. empty() – Returns whether the container is empty.
5. reserve() – Requests that the list capacity be at least enough to contain n elements.

Element access:
1. reference operator [g] – Returns a reference to the element at position ‘g’ in the list
2. at(g) – Returns a reference to the element at position ‘g’ in the list
3. front() – Returns a reference to the first element in the list
4. back() – Returns a reference to the last element in the list

Modifiers: 
1. push_back() – It push the elements into a list from the back
2. pop_back() – It is used to pop or remove elements from a list from the back.
3. insert() – It inserts new elements before the element at the specified position
4. erase() – It is used to remove elements from a container from the specified position or range.
5. swap() – It is used to swap the contents of one list with another list of same type. Sizes may differ.
6. clear() – It is used to remove all the elements of the list container
7. assign() – It assigns new value to the list elements by replacing old ones

Some Method:
1. begin() – Returns an iterator pointing to the first element in the list
2. end() – Returns an iterator pointing to the theoretical element that follows the last element in the list
3. rbegin() – Returns a reverse iterator pointing to the last element in the list (reverse beginning). It moves from last to first element
4. rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the list (considered as reverse end)
5. cbegin() – Returns a constant iterator pointing to the first element in the list.
6. cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the list.
7. crbegin() – Returns a constant reverse iterator pointing to the last element in the list (reverse beginning). It moves from last to first element
8. crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the list (considered as reverse end)

____________________________________________________________
Reference Link: https://www.geeksforgeeks.org/list-cpp-stl/
_____________________________________________________________
*/