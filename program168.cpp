//Count number of l or L letters in string

#include<iostream>
using namespace std;

int strlenX(char str[])
{
	int i=0;
	
	while(*str !='\0')
	{
		if((*str=='l')||*str=='L')
		{
			i++;
		}
		str++;
	}
	return i;

}

int main()
{
	int iRet=0;
	char Arr[20];

	cout<<"Enter string: "<<endl;
	cin.getline(Arr,20);

	iRet=strlenX(Arr);
	cout<<"Length is: "<<iRet<<endl;

	return 0;
}