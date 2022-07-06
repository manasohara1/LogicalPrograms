////////////////////////////////////
// WAP to perform Addition of 2 numbers (take input from user and use business logic pattern)
///////////////////////////////////
//Example Given : Istriwala and Middle Man
#include<iostream>
using namespace std;
//business logic
//////////////////////////////////////////////////////////
//
//Function Name:    Addition
//Description:      Display addition of two numbers
//Input:            int,int
//Output:           int
//Date:             21/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int Addition(int iNum1,int iNum2)
{
    int iAns=0;
    iAns=iNum1+iNum2;

    return iAns;
}
//////////////////////////////////////////////////////////
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    cout<<"Enter 1st number :";
    cin>>iValue1;
    cout<<"Enter 2nd number :";
    cin>>iValue2;

    iRet=Addition(iValue1,iValue2);

    cout<<"Addition is : "<<iRet;

    return 0;
}
//////////////////////////////////////////////////////
//Test Case
/////////////////////////////////////////////////////
// Case 1:
// i : 11   j:21
// k : 32
////////////////////////////////////////////////////
// Case 2:
// i : 10   j:20
// k : 30
////////////////////////////////////////////////////