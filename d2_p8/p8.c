#include<stdio.h>
#include "p8.h"
int amicable(int n,int m)
{
    int nDivisorSum = 0;
    int mDivisorSum = 0;

    for(int i=1;i<n;i++)
        {

        if(n % i == 0)
        {
            nDivisorSum = nDivisorSum + i;
        }
    }

    for(int i=1;i<m;i++){
        if(m % i == 0){
            mDivisorSum = mDivisorSum + i;
        }
    }


    if((n == mDivisorSum) && (m == nDivisorSum)){
        return 1;
    }
    else
        {
        return 2;
    }

}
