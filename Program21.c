#include<stdio.h>

int DisplayNumbers(int iValue)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iValue; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iNo = 0 ;
    printf("Enter Number to display : \n");
    scanf("%d",&iNo);

    DisplayNumbers(iNo);

    return 0;
}