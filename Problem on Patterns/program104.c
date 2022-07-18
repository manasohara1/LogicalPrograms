//Input : Row=4, Column=4
//Output : 
/*
	a	b	c	d
	a	b	c	d
	a	b	c	d
	a	b	c	d	
	
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
	for(i=1;i<=iRow;i++)
	{
		for(j=1,ch='a';j<=iCol;j++,ch++)
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
