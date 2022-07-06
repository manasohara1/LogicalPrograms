///////////////////////////////////////////////////////////////////////////////
// WAP to accept N numbers from user and search a user number in array without using flag
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//////////////////////////////////////////////////////////
//
//Function Name:    Search
//Description:      Check whether given number is present inside array 
//Input:            array,int,int 
//Output:           bool
//Date:             04/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
bool Search(int Arr[],int iLength,int iSearch)
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
		return false;
	}
	else
	{
		return false;
	}
	
}

/////////////////////////////////////////////////////////
int main()
{
	auto int iSize=0;
	register int iCnt=0;
	auto bool bRet=false;
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
	
	
	bRet=Search(ptr,iSize,iValue);
	
	if(bRet==true)
	{
		printf("Number %d present inside array ",iValue);
	}
	else
	{
		printf("Number %d is not there in array",iValue);
	}
	
	
	//deallocating that given memory
	free(ptr);
	
	printf("\n");
	
	return 0;
}	
