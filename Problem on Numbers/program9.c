#include"header9.h"
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
// gcc program7.c library7.c -o Myexe
