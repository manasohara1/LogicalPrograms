//Input : 5
//Output : *	*	*	*	*
#include<stdio.h>
void Display(int iNo)
{
	auto int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\t");
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