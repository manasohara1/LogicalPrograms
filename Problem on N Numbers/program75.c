///////////////////////////////////////////////////////////////////////////////
// WAP to accept N numbers from user and return smallest number from that N numbers
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//Function Name:    Minimum
//Description:      return smallest number from that N numbers
//Input:            array,int 
//Output:           int
//Date:             04/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int Minimum(int Arr[],int iLength) //this works for both positive and negative numbers
{
	register int iCnt=0;
	int iMin=Arr[iCnt]; //Set 1st element of an array to iMax
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]<iMin)
		{
			iMin=Arr[iCnt];
		}
			
	}
	return iMin;
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
	
	
	
	iRet=Minimum(ptr,iSize);
	printf("\nMinimum number in array elements is : %d ",iRet);
	
	
	//deallocating that given memory
	free(ptr);
	
	printf("\n");
	
	return 0;
}	
