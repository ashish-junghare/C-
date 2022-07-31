#include<iostream>
using namespace std;

template<class T>
void SwapR(T &p,T &q)
{
	T temp;
	temp=p;
	p=q;
	q=temp;

}


int main()
{
	int No1= 10,No2= 21;

	cout<<"int Before swap data is: "<<No1<<" and "<<No2<<endl;

	SwapR(No1,No2);

	cout<<"int After swap data is: "<<No1<<" and "<<No2<<endl;


	float fNo1= 10.0,fNo2= 21.0;

	cout<<"float Before swap data is: "<<fNo1<<" and "<<fNo2<<endl;

	SwapR(fNo1,fNo2);

	cout<<"float After swap data is: "<<fNo1<<" and "<<fNo2<<endl;

	char cNo1= 'A',cNo2= 'B';

	cout<<"char Before swap data is: "<<cNo1<<" and "<<cNo2<<endl;

	SwapR(cNo1,cNo2);

	cout<<"char After swap data is: "<<cNo1<<" and "<<cNo2<<endl;


	return 0;
}