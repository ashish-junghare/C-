#include<iostream>
using namespace std;

class Base
{
    public:

        int Addition(int value1, int value2)
        {
        int ans=0;
        ans = value1 + value2;
        return ans;
        }
};


int main()
{

    int iNo1=0;
    int iNo2=0;
    int iNo3=0;

    cout<<"Enter First number: \n";
    cin>>iNo1;

    cout<<"Enter second number: \n";
    cin>>iNo2;
    Base obj;
    iNo3=obj.Addition(iNo1,iNo2);

    cout<<"Addition of two number is: "<<iNo3<<"\n";

    return 0;
}