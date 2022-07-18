//Input : Row=6, Column=4
//Output : 
/*
	*	
	*	*	
	*	*	*	
	*	*	*	*	
	
*/	
//With a filter and efficiency
//Complexity : n^2
// Author : Manas Ohara
// Date  : 10/05/2022
#include<stdio.h>
void Display(int iRow,int iCol)
{
	auto int i=0,j=0;
	if(iRow!=iCol)
	{
		printf("\nInvalid input");
		return;
	}
	for(i=1;i<=iRow;i++)
	{
		/*for(j=1;j<=iCol;j++)
		{
			
			if( (i==iRow) || (j==1) || (i>j) || (i==j) )
			{
				printf("*\t");
			}
			else if(j>i)
			{
				printf(" \t");
			}
			
			//Optimised code version 1 :
			
			
	
		}*/
		//Optimised code version 3 :
		for(j=1;j<=i;j++)
		{
			//No need of if condition
			/*if(i>=j)
			{
				printf("*\t");
			}*/ 
			printf("*\t");
		}
		printf("\n");
	}
}
int main()
{
	auto int iValue1=0,iValue2=0;

	printf("Enter number of rows : ");
	scanf("%d",&iValue1);
	printf("Enter number of columns : ");
	scanf("%d",&iValue2);

	Display(iValue1,iValue2);
	printf("\n");

	return 0;
}
