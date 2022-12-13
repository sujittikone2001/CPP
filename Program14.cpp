#include<iostream>
using namespace std;

//Input : 4 Occurs 1 times
//        5 Occurs 1 times
//        6 Occurs 1 times
//        7 Occurs 2 times
//        8 Occurs 1 times
//        9 Occurs 1 times
class DigitX
{
    public:
        int iNo;

        DigitX()
        {
            iNo = 0;
        }
        DigitX(int i)
        {
            iNo = i;
        }

       void DisplayFrequency()
       {
           int iTemp = iNo;
           int iDigit = 0;
           int Frequency[10] = {0};

           while(iTemp != 0)
           {
              iDigit = iTemp % 10;
              Frequency[iDigit]++;
              iTemp = iTemp / 10;
           }

           for(int iCnt = 0; iCnt < 10; iCnt++)
           {
              if(Frequency[iCnt] > 0)
              {
                 cout<<iCnt<< " Occurs at "<< Frequency[iCnt]<<" times"<<"\n";
              }
           }
       }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Please enter number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.DisplayFrequency();

    return 0;
}