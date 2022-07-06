///////////////////////////////////////////////////////////////////////////////
// WAP to accept N numbers from user and return largest number from that N numbers
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//Function Name:    Maximum
//Description:      return largest number from that N numbers
//Input:            array,int 
//Output:           int
//Date:             04/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int Maximum(int Arr[],int iLength) //for positive numbers it works but not for negative numbers
{
	register int iCnt=0;
	int iMax=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}
			
	}
	return iMax;
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
	
	iRet=Maximum(ptr,iSize);
	printf("\nMaximum number in array elements is : %d ",iRet);
	
	
	//deallocating that given memory
	free(ptr);
	
	printf("\n");
	
	return 0;
}	
