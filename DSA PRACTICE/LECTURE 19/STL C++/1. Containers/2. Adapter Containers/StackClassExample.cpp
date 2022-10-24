// Class 01: Stack (LIFO)

#include <iostream>
#include<stack>
using namespace std;
int main() 
{
  stack<string> s;

  s.push("love");
  s.push("babbar");
  s.push("Kumar");

  cout<<"Top Element: "<<s.top()<<endl;

  s.pop();
  cout<<"Top Element: "<<s.top()<<endl;

  cout<<"size of stack: "<<s.size()<<endl;

  cout<<"Empty or not: "<<s.empty()<<endl;

  
  return 0;

}

/*
OUTPUT:
Top Element: Kumar
Top Element: babbar
size of stack: 2
Empty or not: 0
*/


/*
Operations on stack class:
__________________________
1. empty() – Returns whether the stack is empty 
2. size() – Returns the size of the stack – Time Complexity 
3. top() – Returns a reference to the top most element of the stack
4. push() – Adds the element ‘g’ at the top of the stack 
5. pop() – Deletes the top most element of the stack 
____________________________________________________________
Reference Link: https://www.geeksforgeeks.org/stack-in-cpp-stl/
_____________________________________________________________
*/