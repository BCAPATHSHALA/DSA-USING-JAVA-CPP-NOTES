// PROGRAM 03: Character NOT Case Sensitive 'S'='s'

#include <iostream>
using namespace std;

char toLowerCase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else if(ch>='A' && ch<='B')
    {
        char temp=ch - 'A'+'a';
        return temp;
    }
}

int main()
{
    cout<<"Character b: "<<toLowerCase('b')<<endl;
    cout<<"Character B: "<<toLowerCase('B')<<endl;


    return 0;

}


/*
Character b: b
Character B: b
*/