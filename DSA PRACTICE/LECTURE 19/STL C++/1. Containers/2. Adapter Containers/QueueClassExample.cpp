// Class 02: Queue (FIFO)

#include <iostream>
#include<queue>
using namespace std;
int main() 
{
  queue<string> q;

  q.push("love");
  q.push("Babbar");
  q.push("Kumar");

  cout<<"Size before pop: " <<q.size()<<endl;
  
  cout<<"First Element: "<<q.front()<<endl;
  
  q.pop();
  cout<<"First Element: "<<q.front()<<endl;

  cout<<"Last Element: "<<q.back()<<endl;

  cout<<"Size after pop: " <<q.size()<<endl;

  
  return 0;

}

/*
OUTPUT:
Size before pop: 3
First Element: love
First Element: Babbar
Last Element: Kumar
Size after pop: 2

*/


/*
Operations on queue class:
__________________________
1. empty() – Returns whether the queue is empty
2. size() – Returns the size of the queue
3. front() – Returns a reference to the top most element of the queue
3. back() – Returns a reference to the last element of the queue
4. push() – Adds the element ‘g’ at the top of the queue
5. pop() – Deletes the top most element of the queue
____________________________________________________________
Reference Link: https://www.geeksforgeeks.org/queue-cpp-stl/
_____________________________________________________________
*/