////////////////////////////////////
// WAP to accept 5 no.s from user and store it into array and display.
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
	
	printf("Enter elements : ");
	scanf("%d",&Arr[0]);
	scanf("%d",&Arr[1]);
	scanf("%d",&Arr[2]);
	scanf("%d",&Arr[3]);
	scanf("%d",&Arr[4]);
	
	printf("Elements of array are : ");
	printf("%d\t",Arr[0]);
	printf("%d\t",Arr[1]);
	printf("%d\t",Arr[2]);
	printf("%d\t",Arr[3]);
	printf("%d\t",Arr[4]);
	printf("\n");
	
	return 0;
}	
