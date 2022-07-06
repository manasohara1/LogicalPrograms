//////////////////////////////////////////////////////////////////
// Accept no. from user and check whether your number is divisible by 3 and 5
// Note : 1-true 0-false
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h> //it contains boolean data type
//////////////////////////////////////////////////////////
//
//Function Name:    DivisibleBy3and5
//Description:      Check whether number is divisible by 3 and 5
//Input:            15(any decimal number)
//Output:           true
//Date:             20/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
bool DivisibleBy3and5(int iNo){
    if((iNo%3==0) && (iNo%5==0)){
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
    bRet=DivisibleBy3and5(iValue);
    if(bRet==true){
        printf("%d is divisible by 3 and 5",iValue);
    }else{
        printf("%d is not divisible by 3 and 5",iValue);
    }
    return 0;
}
//////////////////////////////////////////////
//Test Case
//////////////////////////////////////////////
//Case1
//Input : 15
//Output : true
//////////////////////////////////////////////
//Case2
//Input : 16
//Output : false
///////////////////////////////////////////////
