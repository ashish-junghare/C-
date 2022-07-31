#include<iostream>
using namespace std;


class ArrayX
{
	public:
		int *Arr;
		int Size;

		ArrayX(int value)
		{
			Size=value;
			Arr=new int[Size];
		}

		~ArrayX()
		{
			delete []Arr;
		}
		void Accept()
		{
			cout<<"E"
		}
}

int main()
{

	return 0;
}