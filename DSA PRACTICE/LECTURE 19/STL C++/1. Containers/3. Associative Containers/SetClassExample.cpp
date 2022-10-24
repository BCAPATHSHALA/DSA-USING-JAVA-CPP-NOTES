// Class 01: Set (Stored Sorted Unique Elements)

#include <iostream>
#include<set>

using namespace std;
int main() 
{
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    
    cout<<"Print Set: ";
    for(auto i : s) 
    {
      cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);

    cout<<"Print Set After Erasing Element 1: ";
    for(auto i : s) 
    {
      cout<<i<<" ";
    }cout<<endl;
    
    cout<<"-5 is present or not: "<<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(5);

    cout<<"Print Set After Finding Element 5: ";
    for(auto it=itr;it!=s.end();it++) 
    {
      cout<<*it<<" ";
    }cout<<endl;
    
    cout<<"Maximum Size of Set: "<<s.max_size();

    return 0;

}


/*
OUTPUT:
Print Set: 0 1 5 6 
Print Set After Erasing Element 1: 0 5 6 
-5 is present or not: 0
Print Set After Finding Element 5: 5 6 
Maximum Size of Set: 230584300921369395
*/


/*

Operations on set class:
________________________
1. top() – Returns a reference to the top most element of the set
2. insert() – Adds the element ‘g’ at the top of the set
3. erase() – Deletes the element of the set

Some Basic Functions Associated with Set class: 
_______________________________________________

1. begin() – Returns an iterator to the first element in the set.
2. end() – Returns an iterator to the theoretical element that follows the last element in the set.
3. size() – Returns the number of elements in the set.
4. max_size() – Returns the maximum number of elements that the set can hold.
5. empty() – Returns whether the set is empty.
____________________________________________________________
Reference Link: https://www.geeksforgeeks.org/set-in-cpp-stl/
_____________________________________________________________
*/