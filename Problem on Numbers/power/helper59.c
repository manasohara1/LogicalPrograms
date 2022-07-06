#include"Header59.h"
ULONG power(int iNo1,int iNo2)
{
    register int iCnt=0; //due to register faster execution
    //memory for iCnt directly into uP
    ULONG iMult=1;

    for(iCnt=1;iCnt<=iNo2;iCnt++) 
    {
        iMult=iMult*iNo1;
    }
    return iMult;
}