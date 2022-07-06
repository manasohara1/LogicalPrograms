////////////////////////////////////
// WAP to create dynmaic array and display only even elemts from that Array
///////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//Function Name:    DisplayEven
//Description:      Display the even array elements 
//Input:            array,int
//Output:           ----
//Date:             02/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
void DisplayEven(int Arr[],int iLength)
{
	register int iCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}
/////////////////////////////////////////////////////////
int main()
{
	auto int iSize= 0;
	auto int *ptr = NULL;
	register int iCnt=0;
	
	printf("Enter number of elements : ");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
	printf("Enter the values of array : ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Even values in array are : ");
	DisplayEven(ptr,iSize);
	
	free(ptr);
	
	return 0;
}	
