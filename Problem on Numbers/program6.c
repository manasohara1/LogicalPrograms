#include<stdio.h>
//this is called as internal documenttaion
//////////////////////////////////////////////////////////
//
//Function Name:    Addition
//Description:      Used to perform addition of 2 numbers
//Input:            Integer,Integer
//Output:           Integer
//Date:             12/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int Addition(int iValue1,int iValue2){
    int iAns=0;
    iAns=iValue1+iValue2;
    return iAns;
}
//////////////////////////////////////////////////////////
//Write a program to perform addition of two numbers
//////////////////////////////////////////////////////////
int main(){
    int iNo1=0;
    int iNo2=0;
    int ino3=0;

    printf("\nEnter 1st number : ");
    scanf("%d",&iNo1);
    printf("\nEnter 2nd number : ");
    scanf("%d",&iNo2);
    ino3=Addition(iNo1,iNo2);
    printf("Addition is : %d",ino3);
    return 0;
}
//////////////////////////////////////////////////////////
//
//Input:    11 10
//Output:   21
//
//////////////////////////////////////////////////////////
