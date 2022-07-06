////////////////////////////////////
// WAP to create dynmaic array and display only even elements from that Array
///////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//Function Name:    DisplayEven
//Description:      return the count of even array elements 
//Input:            array,int 
//Output:           int
//Date:             02/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int CountEven(int Arr[],int iLength)
{
	register int iCnt=0;
	register int iEvenCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]%2==0)
		{
			iEvenCnt++;	
		}
	}
	return iEvenCnt;
}
/////////////////////////////////////////////////////////
int main()
{
	auto int iSize= 0;
	auto int *ptr = NULL;
	register int iCnt=0;
	auto int iRet=0;
	
	printf("Enter number of elements : ");
	scanf("%d",&iSize);
	
	ptr=(int *)malloc(iSize*sizeof(int));
	
	printf("Enter the values of array : ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	
	iRet=CountEven(ptr,iSize);
	printf("No. of even values in array are : %d",iRet);
	
	free(ptr);
	
	return 0;
}	
