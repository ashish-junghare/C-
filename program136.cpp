//Factorial
#include<iostream>
using namespace std;
int Factorial(int No)
{
	int iFact=1,i=0;
	for(i=1;i<=No;i++)
	{
		iFact=iFact*i;
	}
	return iFact;
}


int main()
{
	int iValue1=0,iRet=0;

	cout<<"Enter value: "<<endl;
	cin>>iValue1;

	iRet=Factorial(iValue1);

	cout<<"Factorial is: "<<iRet<<endl;
	
	return 0;
}