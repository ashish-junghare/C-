//Problem on string

#include<iostream>
using namespace std;

bool strcmpX(char src[],char dest[])
{
	while((*src!='\0')&&(*dest!='\0'))
	{
		if(*src!=*dest)
		{
			break;
		}
		src++;
		dest++;
	}

	if(*src=='\0' && *dest=='\0')
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	bool bRet=0;
	char Arr[20];
	char Brr[20];

	cout<<"Enter First string: "<<endl;
	cin.getline(Arr,20);

	cout<<"Enter second string: "<<endl;
	cin.getline(Brr,20);

	bRet=strcmpX(Arr,Brr);
	if(bRet==true)
	{
		cout<<"both string are same\n";
	}
	else
	{
		cout<<"both string are differant\n";
	}
	
	
	return 0;
}