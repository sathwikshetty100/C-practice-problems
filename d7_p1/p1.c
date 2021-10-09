
#include<stdlib.h>
#include "p1.h"

int * store_array_dynamically(int size)
{
    int *my_arr, i;

    my_arr = (int *)malloc(sizeof(int) * size);

    if(my_arr == NULL) return NULL; // if memory not allocated

    for(i=0; i< size; i++)
        *(my_arr+i) = i+1; // Store data 1 to size at location 0 to size-1


    return my_arr; // return base address of dynamically allocated memory
}


int search_array_dynamically(int *arr, int size, int element)
{
    int i;

    for(i = 0; i< size; i++)
    {
        if(*(arr+i) == element)
            return 1;
    }
    return 0;
}
Min_max min_max(int *arr, int size,Min_max result)
{
    int i;

    result.min = result.max = arr[0];

    for(i=1;i<size;i++)
    {
        if(result.min > arr[i]) result.min = arr[i];
        if(result.max < *(arr+i)) result.max = *(arr+i);
    }
    return result;
}
int sum_of_array(int *array,int size)
{
    int i;
    int sum=0;

 for(i = 0; i < size; i++)
 {
          sum = sum + array[i];
}
return sum;
}
int even_odd_sum(int *array,int size)
{
    int i;
    int Even_Sum = 0, Odd_Sum = 0;
    for(i = 0; i < size; i ++)
 {
   if(array[i] % 2 == 0)
   {
 	Even_Sum = Even_Sum + array[i];
   }
   else
   {
 	Odd_Sum = Odd_Sum + array[i];

}

 }
return Even_Sum;
}

int pallindrome(int *array[], int size)
 {
   int i, j, flag = 0;
   for(i = 0, j=size-1; i< size/2, j>=size/2; i++, j--) {
      if(array[i]!=array[j])
        {
         flag = 1;
         break;
      }
   }
   if (flag == 1)
   return 0;
   else
   return 1;
 }
