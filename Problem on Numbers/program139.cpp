//Factorial of a number  with OOP-manners
#include<iostream>
using namespace std;
class Number
{
	private:
		int iNo; //characteristics
	public :
		//behaviours
		void Accept()
		{
			cout<<"\nEnter the value : ";
			cin>>this->iNo;
		}
		void Display()
		{
			cout<<"\nValue is : "<<iNo;
		}
		int Factorial()
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
			for(iCnt=1;iCnt<=this->iNo;iCnt++)
			{
				iFact=iFact*iCnt;
			}
			return iFact;
	}
};
int main()
{
	Number nobj1;
	Number nobj2;
	
	
	int iRet=0;
	
	nobj1.Accept();
	nobj1.Display();
	
	iRet=nobj1.Factorial();
	cout<<"Factorial is "<<iRet<<"\n";
	
	nobj2.Accept();
	nobj2.Display();
	
	iRet=nobj2.Factorial();
	cout<<"Factorial is "<<iRet<<"\n";
	
	return 0;
}
