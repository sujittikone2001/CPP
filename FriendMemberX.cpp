#include<iostream>
using namespace std;

 class Marvellous
 {
 public:
    void fun();
    void gun();

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
      friend void Marvellous::gun();
 };
void Marvellous::fun()
 {
   Demo obj;
   cout<<"Value of i :"<<obj.i;
   cout<<"Value of j :"<<obj.j;
   cout<<"Value of k :"<<obj.k;
 }
 void Marvellous::gun()
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
   mobj.gun();

  return 0;
}



