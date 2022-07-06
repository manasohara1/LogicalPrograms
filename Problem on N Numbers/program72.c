///////////////////////////////////////////////////////////////////////////////
// WAP to create dynmaic array and deturn the summation of even array elements
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//Function Name:    DisplaySum
//Description:      return the summation of array elements 
//Input:            array,int 
//Output:           int
//Date:             04/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int SummationNumber(int Arr[],int iLength)
{
	register int iCnt=0;
	auto int iSum=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iSum=iSum+Arr[iCnt];
	}
	return iSum;
}
/////////////////////////////////////////////////////////
int main()
{
	auto int iSize=0;
	register int iCnt=0;
	auto int iRet=0;
	auto int *ptr=NULL;
	
	printf("Enter number of elements : ");
	scanf("%d",&iSize);

	//allocating that much amount of memory to an particular variable(pointer)
	ptr=(int *)malloc(iSize*sizeof(int));
	
	printf("Enter elements : ");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=SummationNumber(ptr,iSize);
	printf("Summation of array elements is : %d ",iRet);
	
	//deallocating that given memory
	free(ptr);
	
	return 0;
}	
