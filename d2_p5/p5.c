#include<stdio.h>
#include "p5.h"
#include<conio.h>
int prime_number(int n=3)


int count=1, flag, i=2, j;
 while(count <= n)
	 {
		  flag = 0;
		  for(j=2; j <= i/2; j++)
		  {
			   if(i%j==0)
			   {
			    flag=1;
			    return 1;
			    break;
			   }
		  }
		  if(flag==0)
		  {
			   return 2;
			   count++;
		  }
		  i++;


	 return(0);
}
