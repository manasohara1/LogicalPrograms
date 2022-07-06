///////////////////////////////////////////////////
//Accept no. from user and return addition of factors of that number
///////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    SumFactors
//Description:      addition of factors of  number
//Input:            10
//Output:           8
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
    auto   int iValue=0;
    auto int iRet=0;
    printf("Enter no : ");
    scanf("%d",&iValue);

    iRet=SumFactors(iValue);
    printf("Sum of factors is : %d",iRet);
    
    return 0;
}

