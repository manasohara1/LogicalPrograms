///////////////////////////////////////////////////
//Program to display Hello 5 times on screen
///////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//
//Function Name:    main
//Description:      Demonstration of iteration
//Input:            ------
//Output:           5x"Hello"
//Date:             18/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
#include<stdio.h>
void Display(); //Function Declration
int main(){
    Display(); //Function call
    return 0;
}
void Display(){ // Function Defination
    int iCnt=0;
    //1 Initialization
    //2 Condition
    //3 Loop Displacement
    //4 Function body

    //   1      2       3
    for(iCnt=0;iCnt<=5;iCnt++){
        //  4
        printf("Hello\n");
    }
    
}