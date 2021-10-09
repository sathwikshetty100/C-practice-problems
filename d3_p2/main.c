#include<stdio.h>
int main()
{
 int n1=0,n2=0,n3=1,n4,i,number=8;

 printf("\n%d %d %d",n1,n2,n3);
 for(i=1;i<number;++i)
 {
  n4=n1+n2+n3;
  printf(" %d",n4);
  n1=n2;
  n2=n3;
  n3=n4;
 }
  return 0;
 }
