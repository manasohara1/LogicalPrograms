///////////////////////////////////////////////////
//Program to display 1 to n on screen
///////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Demonstration of iteration
//Input:            n(any decimal number)
//Output:           1 2 3 ... n
//Date:             19/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int iNo){
    int iCnt=0;
    //starting point : 1
    //ending point : iNo
    //displacement : 1
    if(iNo<0){
        iNo=-iNo;
    }
    for(iCnt=1;iCnt<=iNo;iCnt++){
        printf("%d\n",iCnt);
    }
}
int main(){
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}