///////////////////////////////////////////////////////////
//Accept no. from user and  and reverse it and return that number
//////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>
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
int Reverse(int iNo)  //548
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
//Working of above function
/*
	1)
		iDigit = 8
		iRev = 0 + 8 = 8
		iNo = 54
	2)
		iDigit = 4
		iRev = 8 * 10 + 4 = 84
		iNo = 5
	3)
		iDigit = 5
		iRev = 84 * 10 + 5 = 845
		iNo = 0
*/
//////////////////////////////////////////////////////////
//
//Function Name:    CheckPallindrome
//Description:      check reverse number is same as number
//Input:            int -->121
//Output:           boolean-true
//Date:             27/04/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
bool CheckPallindrome(int iNo)
{
    auto int iRev=0;
    if(iNo<0) //updater
    {
        iNo=-iNo;
    }
    iRev=Reverse(iNo);
    if(iRev==iNo)
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
    auto int iValue=0;
    auto int iRet=0;
    bool bRet=false;

    printf("Enter number : ");
    scanf("%d",&iValue);
    
    iRet=Reverse(iValue);
    printf("\nReverse of number is : %d",iRet);

    bRet=CheckPallindrome(iValue);
    if(bRet==true)
    {
        printf("Number is pallindrome");
    }
    else
    {
        printf("Number is not pallindrome");
    }

    return 0;
}
