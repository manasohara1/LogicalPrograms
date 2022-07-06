///////////////////////////////////////////////////
//Accept no. from user and display non-factor of that number
///////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    DisplayNonFactors
//Description:      Display non-factors of number
//Input:            -10
//Output:           1 2 5
//Date:             25/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
void DisplayNonFactors(int iNo)
{
    auto int iCnt=0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<iNo ;iCnt++)
    {
        if( (iNo%iCnt) != 0 )
        {
            printf("%d\t",iCnt);
        }
    }
    
}
#include<stdio.h>
int main()
{
    auto int iValue=0;
    printf("Enter no : ");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);
    
    return 0;
}

