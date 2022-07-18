//Input : Row=4, Column=4
//Output : 
/*
	A	A	A	A
	B	B	B	B
	C	C	C	C
	D	D	D	D
*/	
//With a filter and efficiency
//Complexity : n^2
// Author : Manas Ohara
// Date  : 10/05/2022
#include<stdio.h>
void Display(int iRow,int iCol)
{
	auto int i=0,j=0;
	auto char ch='\0';
	if(iRow!=iCol)
	{
		printf("\nInvalid input");
		return;
	}
	for(i=1,ch='A';i<=iRow;i++,ch++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%c\t",ch);	
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
