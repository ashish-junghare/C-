#include<iostream>
using namespace std;

class ArrayX
{
	private:
		int *Arr;
		int iSize;

	public:
		ArrayX(int iValue)
		{
			this->iSize=iValue;
			Arr=new int[iSize];
		}

		void Accept()
		{
			int iCnt=0;
			cout<<"Enter the elements: "<<endl;
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				cin>>Arr[iCnt];
			}
		}

		void Display()
		{
			int iCnt=0;
			cout<<"Entered elements are: "<<endl;
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				cout<<Arr[iCnt]<<endl;
			}
		}


		int Summation()
		{	
			int iSum=0,i=0;

			for(i=0;i<iSize;i++)
			{
				iSum=iSum+Arr[i];
			}
			return iSum;

		}

		~ArrayX()
		{
			delete []Arr;
		}
		
};



int main()
{
	int iRet=0;
	ArrayX aobj(5);
	aobj.Accept();
	aobj.Display();
	iRet=aobj.Summation();
	cout<<"Summation is: "<<iRet<<endl;

	ArrayX aobj1(3);
	aobj1.Accept();
	aobj1.Display();
	iRet=aobj1.Summation();
	cout<<"Summation is: "<<iRet<<endl;
	
	
	
	
	return 0;
}