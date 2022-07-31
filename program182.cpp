//Problem on string

#include<iostream>
using namespace std;

int CountCapital(char str[])
{
	int i=0;
	
	while(*str !='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
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

	iRet=CountCapital(Arr);
	cout<<"Vowels are: "<<iRet<<endl;

	return 0;
}