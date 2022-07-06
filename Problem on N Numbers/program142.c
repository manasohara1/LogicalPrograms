//accept n number and do addition
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//Function Name:    Summation
//Description:      return addition of array elements
//Input:            array,int
//Output:           int
//Date:             04/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int Summation(int Arr[],int iSize)
{
	int iCnt=0;
	auto int iSum=0;
	for(iCnt=0;iCnt<=iSize;iCnt++)
	{
		iSum+=Arr[iCnt];
	}
	return iSum;
}
int main()
{
	int *ptr=NULL;
	int iLength=0;
	int iCnt=0;
	int iRet=0;
	
	printf("\nEnter number of elements : ");
	scanf("%d",&iLength);
	
	ptr=(int*) malloc( iLength * sizeof(int) );
	printf("Enter %d elements ",iLength);
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	iRet=Summation(ptr,iLength);
	printf("Summtion is : %d ",iRet);
	return 0;
}
