//Factorial of a number 
#include<iostream>
using namespace std;
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
		iFact*=iCnt;
	}
	return iFact;
}
int main()
{
	int iValue=0;
	int iRet=0;
	cout<<"\nEnter number : ";
	cin>>iValue;
	iRet=Factorial(iValue);
	cout<<"Factorial is "<<iRet<<"\n";
	return 0;
}
