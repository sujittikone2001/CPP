#include<iostream>
using namespace std;

 class Marvellous
 {
 public:
    void fun();

};
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
      friend void Marvellous::fun();
 };
void Marvellous::fun()
 {
   Demo obj;
   cout<<"Value of i :"<<obj.i;
   cout<<"Value of j :"<<obj.j;
   cout<<"Value of k :"<<obj.k;
 }
 


 int main()
{
   Marvellous mobj;

   mobj.fun();

  return 0;
}



