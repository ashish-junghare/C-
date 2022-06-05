#include<iostream>
using namespace std;


class Addition
{
   public:
      bool CheckEven(int iNo)
      {
         if((iNo%2)==0)
         {
            return true;
         }
         else
         {
            return false;
         }
      }

};



int main()
{
   bool bRet=false;
   int iValue=0;
   cout<<"Enter any number to check whether its even or odd: \n";
   cin>>iValue;
   Addition obj;
   bRet=obj.CheckEven(iValue);
   if(bRet==true)
   {
      cout<<"It is Even number\n";
   }
   else
   {
      cout<<"It is odd number\n";
   }
   return  0;
}