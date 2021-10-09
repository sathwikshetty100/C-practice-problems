#include<stdio.h>
#include "p3.h"
int count_of_digit(int n, int d)
{
    int count, totaln, remainder;
    count =0;
    totaln = n;
    while(totaln>0){
        remainder = totaln%10;
    if(remainder == d)
        count++;
    totaln = totaln/10;

    }
    return count;
}
