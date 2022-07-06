//Factorial of a number
#include<stdio.h>
int Factorial(int iNo)
//4
//4x3x2x1=24
{
	int iFact=1;
	int iCnt=0;
	/*while(iNo !=0)
	{
		iFact=iFact*iNo;
		iNo--;
	}*/
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iFact=iFact*iCnt;
	}
	return iFact;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("\nEnter number : ");
	scanf("%d",&iValue);
	iRet=Factorial(iValue);
	printf("Factorial is %d",iRet);
	return 0;
}
