#include<iostream>
using namespace std;


class Maths
{
  public:                  //Acess Specifer
     int iNo1;             //Charactristics
     int iNo2;             //Charactristics

   Maths()
   {
     iNo1=0;
     iNo2=0;
   }
    Maths(int A,int B)
    {
      iNo1=A;
      iNo2=B;
    }

    int Addition()
    {
       return iNo1 + iNo2;
    }

    int Substraction()
    {
      return iNo1 - iNo2;
    }

  };

int main()
{
   Maths mobj1;
   Maths mobj2(11,10);
   int ret = 0;

   ret=mobj2.Addition();
   cout<<"Addtition is :"<<ret<<"\n";

    ret=mobj2.Substraction();
   cout<<"Substraction is :"<<ret<<"\n";

   ret=mobj1.Substraction();
   cout<<"Substraction is :"<<ret<<"\n";





  return 0;
}

  
