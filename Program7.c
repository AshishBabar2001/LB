#include<stdio.h>

int Multiplication(int iValue1,int iValue2)
{
    int iAns = 0;
    iAns = iValue1 * iValue2;

    return iAns;
}

int main()
{
    int iNo1 = 0 ,iNo2 = 0 ;
    int iMult = 0 ;

    printf("Enter First Number : \n");
    scanf("%d",&iNo1);
    
    printf("Enter Second Number : \n");
    scanf("%d",&iNo2);

    printf("First Number Is : %d\n",iNo1);
    printf("Second Nummber Is : %d\n",iNo2);

    iMult = Multiplication(iNo1,iNo2);
    
    printf("Multiplication Is : %d \n ",iMult);

    return 0;
}