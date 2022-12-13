#include<iostream>
using namespace std;

class Overloading
{
  public:
       int Add(int a,int b)
       {
         cout<<"Addition of Integers\n";
         return a+b;
       }
       
       float Add(float a,float b)
       {
         cout<<"Addition of float is\n";
         return a+b;
       }
       
       double Add(double a, double b)
       {
         cout<<"Addition of double is\n";
         return a+b;
       }
       
       int Add(int a, int b, int c)

       {
       cout<<"Addition of 3 Integers\n";
       return a+b+c;
       }
       void fun(int a, float b)
       {
       }
       void fun(float a, int b)
       {
       }

};

int main()
{
  Overloading obj;
  int i;
  float f;
  double d;
  
  i= obj.Add(11,21);
  cout<<i<<"\n";
  i= obj.Add(11,21,51);
  cout<<i<<"\n";
  f= obj.Add(10.9f,88.9f);
   cout<<f<<"\n";
  d= obj.Add(10.9,88.9);
  cout<<d<<"\n";
  return 0;
}