#include<iostream>
using namespace std;

  class Circle
{
  public:
     float PI;
     float Radius;

   Circle()
     {
         PI = 3.14;
         Radius = 0.0;
     }
   Circle(float A, float B)
    {
         PI = A;
         PI = B;
     }
   void Display()
     {
        cout<<"Value of Radius is : "<< Radius<<"\n";
     }
     virtual float Area() = 0;
     virtual float Circumferance() = 0;
};

   int main()
{


  return 0;
}



