////////////////////////////////////
// WAP to create dynmaic array and display
///////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//Function Name:    Display
//Description:      Display the array elements 
//Input:            array,int
//Output:           ----
//Date:             02/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
void Display(int Arr[],int iLength)
{
	register int iCnt=0;	
	
	printf("Elements of array are : ");
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		printf("%d\t",Arr[iCnt]);
	}
	printf("\n");
}
/////////////////////////////////////////////////////////
int main()
{
	// auto int Brr[5]; <-static memory allocation
	int *ptr=NULL;
	register int iCnt=0;
	auto int iSize=0;
	
	printf("\nEnter number of elements : ");
	scanf("%d",&iSize);
	
	//dynamic memory allocation
	ptr = (int *) malloc(iSize * sizeof(int));
	
	printf("Enter elements\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Display(ptr,iSize); 
	
	free(ptr);
	
	
	return 0;
}	
