///////////////////////////////////////////////////////////////////////////////
// WAP to accept N numbers from user and return the index of search number
//(if number is present inside that array)
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////
//
//Function Name:    SearchFirstOccurance
//Description:      return the index of search number
//Input:            array,int,int 
//Output:           int
//Date:             04/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int SearchFirstOccurance(int Arr[],int iLength,int iSearch)
{
	register int iCnt=0;
	
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iSearch)
		{
			break;
		}
	}
	if(iCnt==iLength)
	{
		return -1;	
	}
	else
	{
		return iCnt;
	}
}



/////////////////////////////////////////////////////////
int main()
{
	auto int iSize=0;
	register int iCnt=0;
	auto int iRet=0;
	auto int iValue=0;
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
	printf("Enter the number to search in array");
	scanf("%d",&iValue);
	
	
	iRet=SearchFirstOccurance(ptr,iSize,iValue);
	
	if(iRet!=-1)
	{
		printf("\nNumber %d first occured at %d index of array  ",iValue,iCnt);
	}
	else
	{
		printf("\nNumber %d is not there in array",iValue);
	}
	
	
	//deallocating that given memory
	free(ptr);
	
	printf("\n");
	
	return 0;
}	
