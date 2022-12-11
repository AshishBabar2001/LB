#include<stdio.h>

void Display(int iValue)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iValue ; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iNo = 0 ;

    printf("Enter Number Of Iteration : \n ");
    scanf("%d",&iNo);

    Display(iNo);

    return 0;
}