///////////////////////////////////////////////////
//Program to display 1 to 5 on screen
///////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Demonstration of iteration
//Input:            ------
//Output:           1 2 3 4 5
//Date:             19/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
#include<stdio.h>
void Display(){
    int iCnt=0;
    /*printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");*/
    for(iCnt=1;iCnt<=5;iCnt++){
        printf("%d\t",iCnt);
    }
}
int main(){
    Display();
    return 0;
}