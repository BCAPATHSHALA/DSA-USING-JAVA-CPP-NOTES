// Class 01: Unordered Set (Stored Unique Elements)

#include <iostream>
#include<unordered_set> 

// #include <bits/stdc++.h>
using namespace std;

int main()
{
	unordered_set <string> stringSet ;

	stringSet.insert("code") ;
	stringSet.insert("in") ;
	stringSet.insert("c++") ;
	stringSet.insert("is") ;
	stringSet.insert("fast") ;
	stringSet.insert("code") ;
	stringSet.insert("fast") ;


	string key = "slow" ;

	// find returns end iterator if key is not found,
	// else it returns iterator to that key

	if (stringSet.find(key) == stringSet.end())
		cout << key << " : not found" << endl << endl ;
	else
		cout << "Found: " << key << endl << endl ;

	key = "c++";
	if (stringSet.find(key) == stringSet.end())
		cout << key << " : not found\n" ;
	else
		cout << "Found: " << key << endl ;

	// now iterating over whole set and printing its
	// content
	cout << "\nAll elements : "<<endl;
	unordered_set<string> :: iterator itr;
	for (itr = stringSet.begin(); itr != stringSet.end(); itr++)
		cout << (*itr) << endl;
}

/*
OUTPUT:
slow : not found
Found: c++
All elements : 
fast
is
c++
in
code
*/

/*
_______________________________________________
Syntax:


Some basic functions associated with unordered_set:  
___________________________________________________

1. insert()– Insert a new {element} in the unordered_set container.
2. begin()– Return an iterator pointing to the first element in the unordered_set container.
3. end()– Returns an iterator pointing to the past-the-end-element.
4. count()– Count occurrences of a particular element in an unordered_set container.
5. find()– Search for an element in the container.
6. clear()– Removes all of the elements from an unordered_set and empties it.
7. erase()– Remove either a single element or a range of elements ranging from start(inclusive) to end(exclusive).
8. size()– Return the number of elements in the unordered_set container.
9. swap()– Exchange values of two unordered_set containers.
10. max_size()– Returns maximum number of elements that an unordered_set container can hold.
11. empty()– Check if an unordered_set container is empty or not.
12. reserve()– Used to request capacity change of unordered_set.
_______________________________________________________________________
Reference Link: https://www.geeksforgeeks.org/unordered_set-in-cpp-stl/
_______________________________________________________________________
*/