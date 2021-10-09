#include <stdio.h>

int main()
{
  int n =4,i;
  long sum=0;
  long int t=1;

  for(i=1;i<=n;i++)
  {
     printf("%ld  ",t);
      if (i<n)
      {
          printf("+ ");

      }
     sum=sum+t;
     t=(t*10)+1;
  }
  printf("\nThe Sum is : %ld\n",sum);
}
