#include"Header59.h"
int main()
{
    auto int iValue1=0,iValue2=0;
    auto ULONG lRet=0;

    printf("\nEnter base: ");
    scanf("%d",&iValue1);
    printf("\nEnter power: ");
    scanf("%d",&iValue2);

    lRet=power(iValue1,iValue2);
    printf("\nResult is : %ld",lRet);
    printf("\n");

    return 0;
}