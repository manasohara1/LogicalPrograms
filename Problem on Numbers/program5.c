////////////////////////////////////
// WAP to perform Addition of 2 numbers (take input from user and use business logic pattern)
///////////////////////////////////
//Example Given : Istriwala and Middle Man
#include<stdio.h>
//business logic
//////////////////////////////////////////////////////////
//
//Function Name:    Addition
//Description:      Display addition of two numbers
//Input:            int,int
//Output:           int
//Date:             21/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int Addition(int iValue1,int iValue2){
    int iAns=0;
    iAns=iValue1+iValue2;
    return iAns;
}
int main(){


    int iNo1=0;
    int iNo2=0;
    int iNo3=0;

    printf("Enter 1st number : ");
    scanf("%d",&iNo1);
    printf("\nEnter 2nd number : ");
    scanf("%d",&iNo2);

    iNo3=Addition(iNo1,iNo2);
    printf("\nAddition is : %d",iNo3);

    return 0;
}
//////////////////////////////////////////////////////
//Test Case
/////////////////////////////////////////////////////
// Case 1:
// i : 11   j:21
// k : 32
////////////////////////////////////////////////////
// Case 2:
// i : 10   j:20
// k : 30
////////////////////////////////////////////////////