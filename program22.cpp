#include<iostream>
using namespace std;


class Addition
{
   public:
      int iCnt;

      Addition()
      {
         iCnt=0;
      }
      
      int Summation(int iNo)
      {
         int iSum=0;
         for(iCnt=1;iCnt<=iNo;iCnt++)
         {
            iSum=iSum+iCnt;
         }
      
      return iSum;
      }
};



int main()
{
   int iValue=0;
   int iRet=0; 
   
   cout<<"Enter any number\n";
   cin>>iValue;

   Addition obj;
   iRet=obj.Summation(iValue);
   cout<<"Addition is: "<<iRet<<"\n";



   return  0;
}