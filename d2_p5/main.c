#include<stdio.h>
#include<conio.h>

int main()
{
	 int n=5, count=1, flag, i=2, j;


	 while(count <= n)
	 {
		  flag = 0;
		  for(j=2; j <= i/2; j++)
		  {
			   if(i%j==0)
			   {
			    flag=1;
			    break;
			   }
		  }
		  if(flag==0)
		  {
			   printf("%d\t",i);
			   count++;
		  }
		  i++;
	 }
	 return(0);
}
