//////////////////////////////////////////////////////////////////
// Accept no. from user and check whether your number is divisible by 3 and 5
// Note : 1-true 0-false
/////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;
//////////////////////////////////////////////////////////
//
//Function Name:    DivisibleBy3and5
//Description:      Check whether number is even or odd
//Input:            15(any decimal number)
//Output:           true
//Date:             20/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
bool DivisibleBy3and5(int iNo){
    //industry pattern of writting if-else condition
    if( (iNo%3==0) 
         && 
        (iNo%5==0) 
      ){
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
    bRet=DivisibleBy3and5(iValue);
    if(bRet==true)
    {
        cout<<iValue<<" is divisible by 3 and 5";
    }else{
        cout<<iValue<<" is not divisible by 3 and 5";
    }
    return 0;
}
//////////////////////////////////////////////
//Test Case
//////////////////////////////////////////////
//Case1
//Input : 15
//Output : true
//////////////////////////////////////////////
//Case2
//Input : 16
//Output : false
///////////////////////////////////////////////