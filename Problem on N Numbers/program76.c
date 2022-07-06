///////////////////////////////////////////////////////////////////////////////
// WAP to accept N numbers from user and return the frequency of number from that N numbers
///////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//Function Name:    CheckOccurance
//Description:      return the frequency of number 
//Input:            array,int,int 
//Output:           int
//Date:             04/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int CheckOccurance(int Arr[],int iLength,int iNum)
{
	register int iCnt=0;
	register int iFrequencyCnt=0;
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNum)
		{
			iFrequencyCnt++;
		}	
	}
	return iFrequencyCnt;
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
	printf("Enter the number of which frequency you want to get :");
	scanf("%d",&iValue);
	
	
	iRet=CheckOccurance(ptr,iSize,iValue);
	printf("\nFrequnecy of number %d in array is :  %d ",iValue,iRet);
	
	
	//deallocating that given memory
	free(ptr);
	
	printf("\n");
	
	return 0;
}	
