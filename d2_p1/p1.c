#include<stdio.h>
#include "p1.h"
int sum_of_number(int n)
{
    int m,sum=0;
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    return sum;
}
