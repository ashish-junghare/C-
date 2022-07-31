#include<iostream>
using namespace std;

template<class T>
T Addition(T A,T B)
{
	T Ans;
	Ans=A+B;
	return Ans;
}


int main()
{
	int No1=11,No2=21,iRet=0;
	iRet=Addition(No1,No2);
	cout<<"Addition is: "<<iRet<<endl;

	float fNo1=11.21,fNo2=21.11,fRet=0.0;
	fRet=Addition(fNo1,fNo2);
	cout<<"Addition of float is: "<<fRet<<endl;	
	return 0;
}