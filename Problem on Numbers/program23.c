//////////////////////////////////////////////////////////////////
// Accept no. from user and check whether it is even or add
// Note : 1-true 0-false
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h> //it contains boolean data type
//////////////////////////////////////////////////////////
//
//Function Name:    CheckEven
//Description:      Check wht   her number is even or odd
//Input:            256(any decimal number)
//Output:           true
//Date:             20/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
bool CheckEven(int iNo){
    if(iNo%2==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int iValue=0;
    bool bRet=false;
    printf("\nEnter number: ");
    scanf("%d",&iValue);
    bRet=CheckEven(iValue);
    if(bRet==true){
        printf("%d is a even number",iValue);
    }else{
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