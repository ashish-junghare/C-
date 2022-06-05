#include<iostream>
using namespace std;


class pattern
{
	private:
		int iRow=0,iCol=0;
	public:
		pattern(int a,int b)
		{
			this->iRow=a;
			this->iCol=b;
		}
		void DisplayPattern()
		{
			int i=0,j=0;
			for(i=1;i<=iRow;i++)
			{
				for(j=1;j<=iCol;j++)
				{
					cout<<"*"<<"\t";
				}
				cout<<endl;
			}
		}
};
int main()
{
	pattern obj(4,4);
	obj.DisplayPattern();
	
	return 0;
}