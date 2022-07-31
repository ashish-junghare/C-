//problems on string
#include<iostream>
using namespace std;



int main()
{
	char Arr[]="Hello\n";

	int i=0;
	
	while(Arr[i]!='\0')
	{
		cout<<Arr[i]<<endl;
		i++;
	}

	i=0;

	for(i=0;Arr[i]!='\0';i++)
	{
		cout<<Arr[i]<<endl;
	}



	return 0;
}