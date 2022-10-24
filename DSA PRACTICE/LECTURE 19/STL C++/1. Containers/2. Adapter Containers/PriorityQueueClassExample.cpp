// Class 03: PriorityQueue (FIFO)

#include <iostream>
#include<queue>

using namespace std;
int main() 
{
    //max heap
    priority_queue<int> maxi;

    //min - heap
    priority_queue<int,vector<int> , greater<int> > mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"Maxi Top Element: "<<maxi.top()<<endl;
    
    cout<<"Maxi heap size: "<<maxi.size()<<endl;
    int n = maxi.size();
    for(int i=0;i<n;i++) 
    {
      cout<<maxi.top()<<" ";
      maxi.pop();
    }cout<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout<<"Mini Top Element: "<<mini.top()<<endl;

    cout<<"Mini heap size: "<<mini.size()<<endl;
    int m = mini.size();
    for(int i=0;i<m;i++) 
    {
      cout<<mini.top()<<" ";
      mini.pop();
    }cout<<endl;

  cout<<"khaali h kya bhai: "<<mini.empty()<<endl;
  
  return 0;
}


/*
OUTPUT:
Maxi Top Element: 3
Maxi heap size: 4
3 2 1 0 
Mini Top Element: 0
Mini heap size: 5
0 1 3 4 5 
khaali h kya bhai: 1
*/


/*
How to create a min-heap for the priority queue?
________________________________________________
Syntax:
priority_queue <int, vector<int>, greater<int>> mini;

Note: By default, C++ creates a max-heap for priority queue.

Operations on queue class:
__________________________
1. empty() – Returns whether the queue is empty
2. size() – Returns the size of the queue
3. top() – Returns a reference to the top most element of the queue
4. push() – Adds the element ‘g’ at the top of the queue
5. pop() – Deletes the top most element of the queue
____________________________________________________________
Reference Link: https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/
_____________________________________________________________
*/