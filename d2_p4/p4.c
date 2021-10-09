#include<stdio.h>
#include "p4.h"
int pallindrome(int n)
{
    int rev,rem,temp;
    temp=n;
    while(n>0)
    {
        rem =n%10;
        rev= rev*10+rem;
        n=n/10;
    }

if(temp=rev)
{
    return 1;
}
else if(temp!=rev)
{
    return 2;
}
}
