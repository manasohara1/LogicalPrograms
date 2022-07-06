//////////////////////////////////////////////////////////////////
// Accept no. from user and check whether it is even or add
// Note : 1-true 0-false
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////
//
//Function Name:    CheckEven
//Description:      Check whther number is even or odd
//Input:            256(any decimal number)
//Output:           true
//Date:             20/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
bool CheckEven(int iNo){
    if(iNo%2==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int iValue=0;
    bool bRet=false;
    cout<<"\nEnter number: ";
    cin>>iValue;
    bRet=CheckEven(iValue);
    if(bRet==true){
        cout<<iValue<<" is a even number";
    }else{
        cout<<iValue<<" is a odd number";
    }
    return 0;
}
//////////////////////////////////////////////
//Test Case
//////////////////////////////////////////////
//Case1
//Input : 256
//Output : true
//////////////////////////////////////////////
//Case2
//Input : 73
//Output : false
///////////////////////////////////////////////