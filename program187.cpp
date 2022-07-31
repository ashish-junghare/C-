#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    if(((ch>=65)&&(ch<=90))
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
    char cValue='\0';
    bool bRet=false;

	printf("Enter any character\n");
    scanf("%c",&cValue);

    bRet=ChkCapital(cValue);

    if(bRet==true)
    {
        printf("It is character\n");
    }
    else
    {
        printf("It is not character\n");
    }

    return 0;
}