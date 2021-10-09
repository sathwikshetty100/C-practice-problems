#include <stdio.h>

int main()
{
  int arr1[5][5],i,j;

       printf("\n\nRead a 2D array of size 3x3 and print the matrix :\n");
       printf("------------------------------------------------------\n");


       printf("Input elements in the matrix :\n");
  for(i=0;i<5;i++)
  {
      for(j=0;j<5;j++)
      {
	      printf("element - [%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }

 printf("\nThe matrix is : \n");
  for(i=0;i<5;i++)
  {
      printf("\n");
      for(j=0;j<5;j++)
           printf("%d\t",arr1[i][j]);
  }
 printf("\n\n");
}
