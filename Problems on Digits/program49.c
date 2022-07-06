////////////////////////////////////////////////////////////////
// Accept no. from user return no. of digits from that number
///////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    CountDigits
//Description:      return No.of digits from that number
//Input:            int -->4567
//Output:           int -->4
//Date:             27/04/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int CountDigits(int iNo)
{
    
    auto int iCnt=0;
    //as we know till which point we have to go
    //but don't know about how many times
    //so we use while loop
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo>0)
    {
        iCnt=iCnt+1;
        iNo=iNo/10;
        
    }
    //Time complexity : O(N)
    //where N is no.of digits in your input
    return iCnt;
}
//////////////////////////////////////////////////////////
int main()
{
    auto int iValue=0;
    auto int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);
    
    iRet=CountDigits(iValue);
    printf("\nNo. of digits in number %d are : %d",iValue,iRet);

    return 0;
}