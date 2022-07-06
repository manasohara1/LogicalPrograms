// Accept no from user and dipslay at no. times hello on screen
///////////////////////////////////////////////////
//Program to display Hello 5 times on screen
///////////////////////////////////////////////////

//////////////////////////////////////////////////////////
//
//Function Name:    main
//Description:      Demonstration of iteration(filteration)
//Input:            int
//Output:           Nx"Hello"
//Date:             18/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
#include<stdio.h>
void Display(int); //Function Declration
int main(){
    int iValue=0;
    printf("Enter number : ");
    scanf("%d",&iValue);
    Display(iValue); //Function call
    return 0;
}
void Display(int iNum){ // Function Defination
    int iCnt=0;
    if(iNum<0){
        printf("Please enter a positive number");
        return;
    }
    //1 Initialization
    //2 Condition
    //3 Loop Displacement
    //4 Function body

    //   1      2       3
    for(iCnt=1;iCnt<=iNum;iCnt++){
        //  4
        printf("Hello\n");
    }
    
}