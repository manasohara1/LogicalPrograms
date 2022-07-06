//////////////////////////////////////////////////////////
//Accept no. from user  and seperate it
// 721 -> 7---2---1
//////////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    DisplayDigits
//Description:      Seperate digits from whole number
//Input:            721
//Output:           7   2   1
//Date:             27/04/2022
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
void DisplayDigits(int iNo)
{
    auto int iDigit=0;
    //as we know till which point we have to go
    //but don't know about how many times
    //so we use while loop
    if(iNo<0)
    {
        iNo=-iNo;
    }
    //Example reference :
    //Take out sugarcane juice till sugarcane is dried
    //in this case : iNo->sugarcane iDigit->juice
    printf("Digits are : ");
    while(iNo!=0)
    {
        iDigit=iNo%10;
        printf("%d\t",iDigit);
        iNo=iNo/10;
    }
    //Time complexity : O(N)
    //where N is no.of digits in your input
}
//////////////////////////////////////////////////////////
int main()
{
    auto int iValue=0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    DisplayDigits(iValue);

    return 0;
}