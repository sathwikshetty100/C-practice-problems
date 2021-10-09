
#include<stdio.h>


int main()
{
    int n=3;
    for(int shift =0;shift<=n;shift++)
    {
        printf("%d\t",1<<shift);
    }
    return 0;
}
