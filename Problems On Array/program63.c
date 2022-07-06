////////////////////////////////////
// WAP to accept 5 no.s from user and store it into array and display. (with loop)
///////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    main
//Description:      Array input
//Input:            Array elements
//Output:           Array elements
//Date:             02/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int main()
{
	//Arr is 1-D array which contains 5 elements 
	// & each element is of type integer
	auto int Arr[5];
	register int iCnt=0;
	
	printf("Enter elements : ");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		scanf("%d",&Arr[iCnt]);
	}
	
	printf("Elements of array are : ");
	
	for(iCnt=0;iCnt<5;iCnt++)
	{
		printf("%d\t",Arr[iCnt]);
	}
	printf("\n");
	
	return 0;
}	
