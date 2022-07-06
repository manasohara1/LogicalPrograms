#include<stdio.h>
#include<stdbool.h>
int power(int iNo1,int iNo2)
{
    register int iCnt=0; //due to register faster execution
    //memory for iCnt directly into uP
    int iMult=1;

    for(iCnt=1;iCnt<=iNo2;iCnt++) 
    {
        iMult=iMult*iNo1;
    }
    return iMult;
}
bool ChkArmstrong(int iNo)
{
    int iTemp=0;
    int iDigitCnt=0,iDigit=0;
    int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    iTemp=iNo;
    //Calculate no. of digits
    while(iNo!=0)
    {
        iDigitCnt++;
        iNo=iNo/10;
    }
    iNo=iTemp;
    while(iNo!=0)
    {
        iDigit=iNo%10;
        iSum=iSum+power(iDigit,iDigitCnt);
        iNo=iNo/10;
    }

    if(iSum==iTemp)
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
    int iValue=0;
    bool bRet=false;

    printf("\nEnter number : ");
    scanf("%d",&iValue);

    bRet=ChkArmstrong(iValue);

    if(bRet==true)
    {
        printf("%d is armstrong number",iValue);
    }
    else
    {
        printf("%d is not armstrong number",iValue);
    }

    return 0;
}