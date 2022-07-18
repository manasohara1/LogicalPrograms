//Input : 4
//Output : -4 -3 -2 -1 0 1 2 3 4 //number line format
//Complexity : O(2N)
// Author : Manas Ohara
// Date  : 09/05/2022
#include<stdio.h>
void Display(int iNo)
{
	auto int iCnt=0;
	
	for(iCnt=-iNo;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",iCnt);
	}
	
}
int main()
{
	auto int iValue=0;

	printf("Please enter value : ");
	scanf("%d",&iValue);

	Display(iValue);
	printf("\n");

	return 0;
}
