//////////////////////////////////////////////////////////////////
// Accept no. from user and check whether it is even or add
// Note : 1-true 0-false (without using stdbool)
/////////////////////////////////////////////////////////////////
#include<stdio.h>

//////////////////////////////////////////////////////////
//
//Function Name:    CheckEven
//Description:      Check whether number is even or odd
//Input:            256(any decimal number)
//Output:           true
//Date:             20/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int CheckEven(int iNo){
    if(iNo%2==0)
    {
        return 1;
    }else
    {
        return 0;
    }
}
int main(){
    int iValue=0;
    int iRet=0;
    printf("\nEnter number: ");
    scanf("%d",&iValue);
    iRet=CheckEven(iValue);
    if(iRet==1)
    {
        printf("%d is a even number",iValue);
    }else
    {
        printf("%d is a odd number",iValue);
    }

    return 0;
}
//////////////////////////////////////////////
//Test Case
//////////////////////////////////////////////
//Case1
//Input : 256
//Output : true
//////////////////////////////////////////////
//Case2
//Input : 73
//Output : false
///////////////////////////////////////////////