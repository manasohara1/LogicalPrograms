////////////////////////////////////////////
// Accept percentage of student 
// if marks are between
// <35% = Failed
// >35% & <50% = Pass class
// >50% & <60% = Second class
// >60% & <70% = First class
// >70 & <=100% = First class with distinction
// Display appropriate result
//////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    DisplayClass
//Description:      Check marks of student
//Input:            83.20
//Output:           first class with Distinction
//Date:             20/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
void DisplayClass(float fMarks){
    //Note : when the range is given switch is not useful
    //       so switch is not useful over here
    if((fMarks>0) && (fMarks<35.0))
    {
        printf("You're failed");
    }
    else if( (fMarks>=35.0) && (fMarks<50.0) )
    {
        printf("You're passed with Pass class");
    }
    else if( (fMarks>=50.0) && (fMarks<60.0) )
    {
        printf("You're passed with Second class");
    }
    else if( (fMarks>=60.0) && (fMarks<70.0) ){
        printf("You're passed with First class");
    }
    else if( (fMarks>=70.0) && (fMarks<=100.0) ){
        printf("You're passed with First class with Distinction");
    }else
    {
        printf("Invalid Marks");
    }
}
#include<stdio.h>
int main(){
    auto float fValue=0.0;

    printf("Enter the student's percentage : ");
    scanf("%f",&fValue);

    DisplayClass(fValue);

    return 0;
}