#include<iostream>
using namespace std;


class Arithmetic
{
   public:

      bool Check(int iNo)
      {
         if(
            ((iNo%3)==0) && 
            ((iNo%5)==0)
            )
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
   int iValue=0;
   bool bRet=false;

   cout<<"Entern number: ";
   cin>>iValue;

   Arithmetic obj;

   bRet=obj.Check(iValue);
   
   if (bRet==true)
   {
      cout<<"It is divisible by 3 and 5\n"<<iValue;
   }
   else
   {
      cout<<"It is not divisible by 3 and 5\n"<<iValue;
   }

   return  0;
}