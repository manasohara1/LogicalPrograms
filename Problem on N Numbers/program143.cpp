//accept n number and do addition
#include<iostream>
using namespace std;
#include<stdlib.h>
class ArrayX
{
	private :
			int *Arr;
			int iSize;
	public :
		ArrayX(int iValue) //Parameterized Constructor
		{
			this->iSize=iValue;
			Arr=new int[iSize]; //Resource
		}
		
		~ArrayX() //Destructor
		{
			delete []Arr;
		}
		
		void Accept()
		{
			int iCnt=0;
			cout<<"\nEnter elements : ";
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				cin>>Arr[iCnt];
			}
		}
		void Display()
		{
			int iCnt=0;
			cout<<"\nArray elements are : ";
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				cout<<Arr[iCnt]<<"\t";
			}
		}
//////////////////////////////////////////////////////////
//
//Function Name:    Summation
//Description:      return addition of array elements
//Input:            
//Output:           int
//Date:             04/05/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////		
		int Summation()
		{
			int iCnt=0;
			int iSum=0;
			for(iCnt=0;iCnt<iSize;iCnt++)
			{
				iSum+=Arr[iCnt];
			}
			return iSum;
		}
};
int main()
{
	int iSize=0;
	int iRet=0;
	
	cout<<"\nEnter no. of elements ";
	cin>>iSize;
	
	ArrayX obj(iSize);
	
	obj.Accept();
	obj.Display();
	
	iRet=obj.Summation();
	cout<<"Summation of array elements is : "<<iRet;
	
	return 0;
}
