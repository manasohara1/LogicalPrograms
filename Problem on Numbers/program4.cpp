////////////////////////////////////
// WAP to perform Addition of 2 numbers (take input from user) (Follow naming Conventions)
///////////////////////////////////
#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////
//
//Function Name:    main
//Description:      Display addition of two numbers
//Input:            10 20
//Output:           30
//Date:             21/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    cout<<"Enter 1st number : ";
    cin>>iValue1;
    cout<<"Enter 2nd number : ";
    cin>>iValue2;

    

    iRet=iValue1+iValue2;
    cout<<"\nAddition is : "<<iRet;
    
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