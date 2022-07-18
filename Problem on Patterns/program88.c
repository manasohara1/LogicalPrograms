//Input : 6
//Output : 1 * 3 * 5 *
//Input : 5
// Output : 1 * 3 * 5
//Complexity : O(2N)

//logic 
// 1	2	3	4	5	6  //Counter
// 1	*	3	*	5	*  //Output
// Author : Manas Ohara
// Date  : 09/05/2022
#include<stdio.h>
void Display(int iNo)
{
	auto int iCnt=0;
	
	for(iCnt=0;iCnt<=iNo;iCnt++)
	{
		if( (iCnt%2) != 0 )
		{
			printf("%d\t",iCnt);
		}
		else
		{
			printf("*\t");
		}
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
