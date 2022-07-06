///////////////////////////////////////////////////
//Accept no. of gold grams and display the amount accordingly
//Rate of gold : 4000rs
///////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////
//
//Function Name:    JwellersPortal
//Description:      Display amount of gold according to grams
//Input:            1
//Output:           4000
//Date:             20/04/20222
//Author:           Manas Ohara
//
//////////////////////////////////////////////////////////
void JwellersPortal(int iWeight){
    int iAmount=4000;
    //Note - As range is not there so switch case is useful
    //       if we convert it into if-else-if ladder it will be retundent
    switch(iWeight){
        case 1:  printf("Your bill amount is : %d rs",iAmount);
                 break;
        case 2:  iAmount=iAmount*2;
                 printf("Your bill amount is : %d rs",iAmount);
                 break;
        case 5:  iAmount=iAmount*5;
                 printf("Your bill amount is : %d rs",iAmount);
                 break;
        case 10: iAmount=iAmount*10;
                 printf("Your bill amount is : %d rs",iAmount);
                 break;
        default: printf("Invalid Weight");
    }
}
int main(){

    auto int iGram=0;

    printf("\n*****Today's Gold Rate*****");
    printf("\n4000Rs/Gram");
    printf("\nHow many gram gold coin you want to purchase?\n");
    scanf("%d",&iGram);

    JwellersPortal(iGram);

    return 0;
}
/////////////////////////////////////////////
//Test Case
/////////////////////////////////////////////
//Case 1:
//Input : 1
//Output : Your bill amount is : 4000rs
/////////////////////////////////////////////
//Case 2:
//Input : 4
//Output : Invalid weight
/////////////////////////////////////////////