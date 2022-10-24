// Class 03: Deque (Dynamic Array:contiguous storage allocation may not be guaranteed)

#include <iostream>
#include<deque>
using namespace std;
int main() 
{
    deque<int> d;

    d.push_back(1);
    d.push_front(2);
    
    cout<<"Print First Index Element: "<<d.at(1)<<endl;
    
    cout<<"front: "<<d.front()<<endl;
    cout<<"back: "<<d.back()<<endl;
    
    cout<<"Empty or not: " <<d.empty()<<endl;
    
    cout<<"before erase " <<d.size()<<": ";
    d.erase(d.begin(),d.end()-1);
    
    cout<<endl;
    
    cout<<"after erase " <<d.size()<<": ";
    for(int i:d){
      cout<<i<<endl;
    }

    d.pop_back();
    cout<<"after pop " <<d.size()<<": ";
    for(int i:d){
      cout<<i<<endl;
    }

  
  return 0;

}

/*
OUTPUT:
Print First Index Element: 1
front: 2
back: 1
Empty or not: 0
before erase 2: 
after erase 1: 1
after pop 0: 
*/


/*
Operations on queue class:
__________________________
Capacity: 
1. size() – Returns the number of elements in the queue.
2. max_size() – Returns the maximum number of elements that the queue can hold.
3. capacity() – Returns the size of the storage space currently allocated to the queue expressed as number of elements.
4. empty() – Returns whether the container is empty.
5. reserve() – Requests that the queue capacity be at least enough to contain n elements.

Element access:
1. reference operator [g] – Returns a reference to the element at position ‘g’ in the queue
2. at(g) – Returns a reference to the element at position ‘g’ in the queue
3. front() – Returns a reference to the first element in the queue
4. back() – Returns a reference to the last element in the queue

Modifiers: 
1. push_back() – It push the elements into a queue from the back
2. pop_back() – It is used to pop or remove elements from a queue from the back.
3. insert() – It inserts new elements before the element at the specified position
4. erase() – It is used to remove elements from a container from the specified position or range.
5. swap() – It is used to swap the contents of one queue with another queue of same type. Sizes may differ.
6. clear() – It is used to remove all the elements of the queue container
7. assign() – It assigns new value to the queue elements by replacing old ones

Some Method:
1. begin() – Returns an iterator pointing to the first element in the queue
2. end() – Returns an iterator pointing to the theoretical element that follows the last element in the queue
3. rbegin() – Returns a reverse iterator pointing to the last element in the queue (reverse beginning). It moves from last to first element
4. rend() – Returns a reverse iterator pointing to the theoretical element preceding the first element in the queue (considered as reverse end)
5. cbegin() – Returns a constant iterator pointing to the first element in the queue.
6. cend() – Returns a constant iterator pointing to the theoretical element that follows the last element in the queue.
7. crbegin() – Returns a constant reverse iterator pointing to the last element in the queue (reverse beginning). It moves from last to first element
8. crend() – Returns a constant reverse iterator pointing to the theoretical element preceding the first element in the queue (considered as reverse end)

____________________________________________________________
Reference Link: https://www.geeksforgeeks.org/deque-cpp-stl/
_____________________________________________________________
*/