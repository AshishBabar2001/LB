#include<stdio.h>

void Display()
{
    int iCnt = 0;
    
    // for(iCnt = 1; iCnt <=5; iCnt++)
    // {
    //     printf("Jay Ganesh...\n");
    // }

    iCnt = 1;             //1
    while(iCnt <= 5)        //2
    {
        printf("Jay Ganesh...\n");//4
        iCnt++;     //3
    }
}

int main()
{
    Display();

    return 0;
}