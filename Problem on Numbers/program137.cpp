//Factorial of a number  with OOP
#include<iostream>
using namespace std;
class Number
{
	public :
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
};
int main()
{
	Number nobj;
	
	int iValue=0;
	int iRet=0;
	
	cout<<"\nEnter number : ";
	cin>>iValue;
	
	iRet=nobj.Factorial(iValue);
	cout<<"Factorial is "<<iRet<<"\n";
	
	return 0;
}
