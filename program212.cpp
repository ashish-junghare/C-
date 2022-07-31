#include<iostream>
using namespace std;

template<class T>
T Display(T Arr[],int size)
{
	int i=0;
	T Max=Arr[0];
	for(i=0;i<size;i++)
	{
		if(Max<Arr[i])
		{
			Max=Arr[i];
		}
	}
	return Max;
}

int main()
{
	int iRet=0;
	int Brr[]={40,20,10,60};

	iRet=Display(Brr,4);
	cout<<"Max number is: "<<iRet<<endl;

	float fRet=0;
	float Crr[]={60.10,60.9,60.8,60.7};

	fRet=Display(Crr,4);
	cout<<"Max number is: "<<fRet<<endl;

	float cRet='/0';
	float Drr[]={'A','Y','X','m'};

	cRet=Display(Drr,4);
	cout<<"Max char is: "<<cRet<<endl;


	return 0;
}