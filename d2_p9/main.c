#include<stdio.h>

int main()
{
int x=5;int y=3;
signed int sum,diff,prod;

int option='s';

printf("\n 1 -> sum \n 2 -> difference \n 3 -> product \n ");
scanf("%d",&option);

switch(option)
{

case 1:
{
 sum=x+y;
 printf("the sum is %d \n",sum);
  break;
 }

case 2:
{
 diff=x-y;
 printf("the diff is %d \n",diff);
 break;
 }

case 3:
{
 prod=x*y;
 printf("the productt is %d \n",prod);
 break;
 }

default: printf("wrong character");
}

return 0;
}
