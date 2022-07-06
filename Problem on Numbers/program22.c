//////////////////////////////////////////////////////////
//                   Algorithm
//////////////////////////////////////////////////////////
/*
    START
    Accept number from user as No
    Check whether that number is +ve or -ve
    If it is negative then convert it to +ve

    Create one variable as Sum and set it to 0
    Create one variable as cnt and set it to 1

    Iterate till Cnt is less than or equal to No
        Add the value of Cnt into variable sum
        Increment the value of Cnt by 1
    Loop

    Display the value of sum

    END
*/
#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    Summation
//Description:      summation of N numbers
//Input:            5(any decimal number)
//Output:           1+2+3+4+5=15
//Date:             19/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
//Using for loop
int Summation(int iNo){
    int iSum=0;
    int iCnt=0;

    if(iNo<0){ //updater
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<=iNo;iCnt++){
        iSum=iSum+iCnt;
    }
    return iSum;
}
/*
//Using while loop
int Summation(int iNo){
    int iSum=0;
    int iCnt=0;
    if(iNo<0){ //updater
        iNo=-iNo;
    }
    iCnt=1;
    while(iCnt<=iNo){
        iSum=iSum+iCnt;
        iCnt++;
    }
    return iSum;
}
*/
int main(){
    int iValue=0;
    int iRet=0;
    printf("Enter number : ");
    scanf("%d",&iValue);
    iRet=Summation(iValue);
    printf("\nSummation of is : %d",iRet);
    return 0;
}
