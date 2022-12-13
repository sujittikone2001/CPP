#include<iostream>
using namespace std;

void fun(int no)
{
    cout<<"Inside call by value : "<<no<<"\n";
    no++;
}

void gun(int *p)
{
    cout<<"Inside call by adress : "<<*p<<"\n";
    (*p)++;
}

void sun(int &ref)
{
    cout<<"Inside call by refrence : "<<ref<<"\n";
    ref++;
}

int main()
{
   int i = 10;
   int j = 10;
   int k = 10;

   fun(i);
   cout<<i<<"\n";
   gun(&j);
   cout<<j<<"\n";
   sun(k);
   cout<<k<<"\n";

  return 0;
}