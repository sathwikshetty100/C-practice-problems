#include<stdio.h>
#include "p2.h"
int reverse_of_number(int n)
{
    int reverse=0,remainder;
    while(n!=0)
    {
        remainder = n%10;
        reverse = reverse*10 + remainder;
        n= n/10;
    }
    return reverse;
}
