///////////////////////////////////////////////////////////
//Accept no. from user and  and reverse it and return that number
//////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    Reverse
//Description:      reverse the input number
//Input:            int -->721
//Output:           int -->127
//Date:             27/04/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int Reverse(int iNo)
{
    int iDigit=0;
    int iRev=0;
    while(iNo>0)
    {   
        iDigit=iNo%10;
        iRev=iRev*10+iDigit;
        iNo=iNo/10;
    }

    return iRev;
}

int main()
{
    auto int iValue=0;
    auto int iRet=0;
    

    printf("Enter number : ");
    scanf("%d",&iValue);
    
    iRet=Reverse(iValue);
    printf("\nReverse of number is : %d",iRet);

    return 0;
}
