///////////////////////////////////////////////////
//Accept no. from user and check whether number is perfect number
///////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////
//
//Function Name:    CheckPerfect
//Description:      check whether number is perfect number
//Input:            ---
//Output:           TRUE|FALSE
//Date:             25/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int SumFactors(int);
bool CheckPerfect(int iNo)
{
    auto int iAns=0;
    iAns=SumFactors(iNo);
    if(iAns==iNo)
    {
        return true;
    }
    else
    {
        return false;
    }

}
//////////////////////////////////////////////////////////
//
//Function Name:    SumFactors
//Description:      Display sum of factors of number
//Input:            36
//Output:           6
//Date:             25/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int SumFactors(int iNo)
{
    auto int iCnt=0;
    auto int iSum=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<= (iNo/2) ;iCnt++)
    {
        if( (iNo%iCnt) == 0 )
        {
           iSum=iSum+iCnt;
        }
    }
    return iSum;
    
}
#include<stdio.h>
int main()
{
    auto int iValue=0;
    auto bool bRet=0;
    printf("Enter no : ");
    scanf("%d",&iValue);

    bRet=CheckPerfect(iValue);
    if(bRet==true)
    {
        printf("%d is a perfect number",iValue);
    }
    else
    {
        printf("%d is not a perfect number",iValue);
    }
    
    return 0;
}

