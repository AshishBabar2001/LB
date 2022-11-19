//Check Wheather Number Is Divisible By Three And Five.

#include<stdio.h>
#include<stdbool.h>

///////////////////////////////////////////////////////////////////////////////////
//  Fuction Name =      DivisiobalByThreeAndFive
//  Description =       This fuction is show divisible by 3 and 5
//  input =         Integer
//  Output =        Boolean
//  Author =        Ashish Babar
///////////////////////////////////////////////////////////////////////////////////

bool DivisibalByThreeAndFive(int iNo)
{
    int iAns1 = iNo % 3;
    int iAns2 = iNo % 5;

    if((iAns1 == 0)&&(iAns2 == 0))
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    bRet = DivisibalByThreeAndFive(iValue);
    if(bRet == true)
    {
        printf("Number Is Divisible By 3 And 5 \n");
    }
    else
    {
        printf("Number Is Divisible By 3 or 5 \n");
    }

    return 0;
}