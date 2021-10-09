#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=1;
    int b=1;
    int sum=0;
    for(a=0;a<10;a++)
    {
        for(b=0;b<10;b++)
        {
        sum =a+b;

    if(sum % 7 ==0)
    {

        printf("%d%d\n",a,b);
    }
    }
    }
    return 0;
}
