//Input : 4
//Output : 1	2	3	4	4	3	2	1
//Complexity : O(2N)
// Author : Manas Ohara
// Date  : 09/05/2022
#include<stdio.h>
void Display(int iNo)
{
	auto int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",iCnt);
	}
	for(iCnt=iNo;iCnt>=1;iCnt--)
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
