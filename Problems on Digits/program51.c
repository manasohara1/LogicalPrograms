////////////////////////////////////////////////////////////////
// Accept no. from user and return addition of even digits
///////////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    SumEvenDigits
//Description:      return sum of even digit from that number
//Input:            int -->121
//Output:           int -->2
//Date:             27/04/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int SumEvenDigits(int iNo)
{
    auto int iDigit=0;
    auto int iSum=0;
    //as we know till which point we have to go
    //but don't know about how many times
    //so we use while loop
    if(iNo<0)
    {
        iNo=-iNo;
    }
    if(iNo==0)
    {
        return 1;
    }
    //Example reference :
    //Take out sugarcane juice till sugarcane is dried
    //in this case : iNo->sugarcane iDigit->juice
    while(iNo>0)
    {
        iDigit=iNo%10;
        if(iDigit%2==0)
        {
            iSum=iSum+iDigit;
        }
        //printf("%d\t",iDigit);
        iNo=iNo/10;
        
    }
    //Time complexity : O(N)
    //where N is no.of digits in your input
    return iSum;
}
//////////////////////////////////////////////////////////
int main()
{
    auto int iValue=0;
    auto int iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);
    
    iRet=SumEvenDigits(iValue);
    printf("\nSum of Even digits are : %d",iRet);

    return 0;
}
