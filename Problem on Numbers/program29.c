///////////////////////////////////////////////////
//Accept no. from user and display factor of that number
///////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    DisplayFactors
//Description:      Display factors of number
//Input:            -10
//Output:           1 2 5
//Date:             25/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
void DisplayFactors(int iNo)
{
    auto int iCnt=0;
    if(iNo<0) //updater
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if( (iNo%iCnt) == 0 )
        {
            printf("%d\t",iCnt);
        }
    }
    
}
#include<stdio.h>
int main()
{
    auto   int iValue=0;
    printf("Enter no : ");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    
    return 0;
}
//Time complexity : O(N)
//O : Order of...
//N : denotes Natural number

