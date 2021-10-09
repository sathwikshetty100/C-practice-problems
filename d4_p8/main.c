#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
int calculation(int n,int numbers[n])
//int main()
{
    //int n=5;
    //int numbers[n];
    //for(int i=0;i<n;i++)
    //{
    //    scanf("%d",&numbers[i]);
   // }
    int sum=0;
    for(int i=0;i<n-1;i++)
    {
        sum=sum +(numbers[i]*numbers[i+1]);
    }
    //printf("sum is =%d",sum);
    return sum;
    }

int main()
{
    int numbers[5]={2,3,4,5,6};
    assert(calculation(5,(2,3,4,5,6))==68);

}
