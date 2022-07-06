///////////////////////////////////////////////////////////
//Accept no. from user(a) and return power(b) of that number
//////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    power
//Description:      calculate of power of given number
//Input:            int,int (3,4)
//Output:           int (3*3*3*3->81)
//Date:             02/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
unsigned long int power(int iNo1,int iNo2)
{
    register int iCnt=0; //due to register faster execution
    //memory for iCnt directly into microprocessor
    unsigned long int iMult=1;

    for(iCnt=1;iCnt<=iNo2;iCnt++) 
    {
        iMult=iMult*iNo1;
    }
    return iMult;
}
int main()
{
    auto int iValue1=0,iValue2=0;
    auto unsigned long int lRet=0;

    printf("\nEnter base: ");
    scanf("%d",&iValue1);
    printf("\nEnter power: ");
    scanf("%d",&iValue2);

    lRet=power(iValue1,iValue2);
    printf("\nResult is : %ld",lRet);
    printf("\n");

    return 0;
}