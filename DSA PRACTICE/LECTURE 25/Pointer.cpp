#include <iostream>
using namespace std;

int main() 
{
 
  int x = 5;

  cout << x<<endl; // value of x is 5
  cout<<&x<<endl; // address of x is 0x7ffe249fcdbc
  
  int *ptr=&x;
  
  cout<<*ptr<<endl;// value of x is 5 as *ptr
  cout<<ptr<<endl; // address of x is 0x7ffe249fcdbc as ptr
  cout<<&ptr<<endl; // address of ptr is 0x7ffe249fcdms

  
  x=++x;
  *ptr=(*ptr)++;
  cout<<x<<endl; // x=6
  cout<<*ptr<<endl; // *ptr=6
  
  cout<<sizeof(x)<<endl; //size of integer is 4 bytes
  cout<<sizeof(*ptr)<<endl; // size of *ptr(pointer) is 4 bytes
  cout<<sizeof(ptr)<<endl;//size of ptr(pointer) is 8 bytes always
  
  int i=7;
  int *p=0;
  p=&i;
  cout<<p<<endl; // address of pointer=0x7fff9802be9c
  cout<<*p<<endl;// value of pointer=7
  
  int *q=&i;
  cout<<q<<endl; //address of pointer=0x7fff9802be9c
  cout<<*q<<endl;// value of pointer=7
  
  
  int num=8;
  int *po=&num;
  cout<<"Before: "<<num<<endl;//8
  cout<< (*po)++<<endl;//8
  cout<<"After: "<<num<<endl;//9
  
  //copying a pointer
  int *pl=po;
  cout<<po<<" = "<<pl<<endl;// address of both pointer *po=100 and *pl=100
  cout<<*po<<" = "<<*pl<<endl;// value of both pointer *po=9 and *pl=9
  
  //important concept
  int l=3;
  int *t=&l;
  *t=*t+1;
  cout<<*t<<endl; // value of *t is 4
  cout<<"Before t: "<<t<<endl; //Before t: 0x7ffe3b2096f4
  t=t+1; // Suppose t=100 then t+1=100+4=104 because integer size is 4 byte
  cout<<"After t: "<<t<<endl; //After t: 0x7ffe3b2096f8
  
  return 0;
}

/*
OUTPUT:
5
0x7ffe74eb8f58
5
0x7ffe74eb8f58
0x7ffe249fcdms
6
6
4
4
8
0x7ffe74eb8f5c
7
0x7ffe74eb8f5c
7
Before: 8
8
After: 9
0x7ffe74eb8f60 = 0x7ffe74eb8f60
9 = 9
4
Before t: 0x7ffe74eb8f64
After t: 0x7ffe74eb8f68
*/