#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main() 
{
  
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    //Binary serach
    cout<<"Finding 6: "<<binary_search(v.begin(),v.end(),6)<<endl;

    //Upper Bound
    cout<<"lower bound: "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
    //Lower Bound
    cout<<"Uppper bound-> "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    int a =3;
    int b =5;

    cout<<"max: "<<max(a,b)<<" and ";

    cout<<"min: "<<min(a,b);
    //swaping
    swap(a,b);
    cout<<endl<<"a: "<<a<<endl;

    //reversing
    string abcd = "abcd";
    reverse(abcd.begin(),abcd.end());
    cout<<"string: "<<abcd<<endl;

    // rotate with 1 element +1
    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"after rotate: ";
    for(int i:v)
    {
      cout<<i<<" ";
    }cout<<endl;

    //sorting
    sort(v.begin(),v.end());
    cout<<"after sorting: ";
    for(int i:v)
    {
      cout<<i<<" ";
    }

    return 0;

}

/*
OUTPUT:
Finding 6: 1
lower bound: 2
Uppper bound-> 2
max: 5 and min: 3
a: 5
string: dcba
after rotate: 6 7 1 3 
after sorting: 1 3 6 7
*/