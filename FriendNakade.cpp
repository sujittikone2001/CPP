#include<iostream>
using namespace std;

class Demo
 {
   public:
      int i;
   private:
      int j;
   protected:
      int k;
   public:
      Demo()
      {
        i = 10;
        j = 20;
        k = 30;
      }
      friend void fun();
 };
 void fun()
 {
   Demo obj;
   cout<<"Value of i :"<<obj.i;
   cout<<"Value of j :"<<obj.j;
   cout<<"Value of k :"<<obj.k;
 }

 int main()
{
   fun();

  return 0;
}



