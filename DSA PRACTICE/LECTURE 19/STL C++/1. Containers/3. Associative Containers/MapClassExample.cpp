// Class 02: Map (Stored Sorted Unique Elements Pairs)


#include <iostream>
#include<map> 

using namespace std;
int main() 
{
    map<int,string> m;

    m[1]= "babbar";
    m[13]="kumar";
    m[2]="love";
    m[15]="manoj";

    m.insert( {5,"bheem"});
    m.insert(pair<int, string>(6, "Amit"));

    cout<<"before erase"<<endl; 
    for(auto i:m) 
    {
      cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"finding -13: " <<m.count(-13)<<endl;

    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m) {
      cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl<<endl;

    auto it = m.find(5);
    cout<<"after finding element 5"<<endl;
    for(auto i=it;i!=m.end();i++) {
      cout<<(*i).first<<endl;
    }
    return 0;
}

/*
OUTPUT:
before erase
1 babbar
2 love
5 bheem
6 Amit
13 kumar
15 manoj
finding -13: 0
after erase
1 babbar
2 love
5 bheem
6 Amit
15 manoj


after finding element 5
5
6
15
*/

/*

Some basic functions associated with map class: 
_________________________________________

1. begin() – Returns an iterator to the first element in the map.
2. end() – Returns an iterator to the theoretical element that follows the last element in the map.
3. size() – Returns the number of elements in the map.
4. max_size() – Returns the maximum number of elements that the map can hold.
5. empty() – Returns whether the map is empty.
6. pair insert(keyvalue, mapvalue) – Adds a new element to the map.
7. erase(iterator position) – Removes the element at the position pointed by the iterator.
8. erase(const g)– Removes the key-value ‘g’ from the map.
9. clear() – Removes all the elements from the map.
_____________________________________________________________________________________________________________
Reference Link: https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
_____________________________________________________________________________________________________________
*/