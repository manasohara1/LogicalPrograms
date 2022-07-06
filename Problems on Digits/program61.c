#include<stdio.h>
#include<stdbool.h>
bool ChkArmstrong(int iNo)
{
    int iTemp=0;
    int iDigitCnt=0,iDigit=0,iCnt=0;
    int iMult=1;
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
        iMult=1;
        iDigit=iNo%10;
        for(iCnt=1;iCnt<=iDigitCnt;iCnt++) 
        {
            iMult=iMult*iDigit;
        }
        iSum=iSum+iMult;
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