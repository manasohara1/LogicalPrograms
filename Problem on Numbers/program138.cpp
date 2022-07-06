//Factorial of a number  with OOP-manners
#include<iostream>
using namespace std;
class Number
{
	private:
		int iNo; //characteristicss
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
	Number nobj;
	
	
	int iRet=0;
	
	nobj.Accept();
	nobj.Display();
	
	iRet=nobj.Factorial();
	cout<<"Factorial is "<<iRet<<"\n";
	
	return 0;
}
