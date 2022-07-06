////////////////////////////////////
// WAP to accept 5 no.s from user and store it into array and display using another function. 
///////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display the array elements 
//Input:            array
//Output:           ----
//Date:             02/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
void Display(int ptr[])
{
	register int iCnt=0;	
	
	printf("Elements of array are : ");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("%d\t",*ptr);
		*ptr++;
	}
	printf("\n");
}
/////////////////////////////////////////////////////////
int main()
{
	auto int Arr[5];
	register int iCnt=0;
	
	printf("Enter elements : ");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	Display(Arr); //Display(100); <-Call by address
	
	
	return 0;
}	
