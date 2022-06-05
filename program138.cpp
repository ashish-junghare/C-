//Factorial
#include<iostream>
using namespace std;

class Number
{
	private: 
		int iNo;		//characteristics
	
	public:
	
	void Accept()
	{
		cout<<"Enter the value: "<<endl;
		cin>>this->iNo;
	}

	void Display()
	{
		cout<<"value is: "<<this->iNo<<endl;
	}

	int Factorial()	//behavior
	{
		int iFact=1,i=0;
		for(i=1;i<=iNo;i++)
		{
			iFact=iFact*i;
		}
		return iFact;
	}

};



int main()
{
	int iValue1=0,iRet=0;

	Number nobj;
	nobj.Accept();
	nobj.Display();
	iRet=nobj.Factorial();

	cout<<"Factorial is: "<<iRet<<endl<<endl;
	
	Number nobj1;
	nobj1.Accept();
	nobj1.Display();
	iRet=nobj1.Factorial();

	cout<<"Factorial is: "<<iRet<<endl<<endl;
	
	return 0;
}