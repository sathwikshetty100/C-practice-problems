#include <stdio.h>
#include <stdlib.h>
#include<assert.h>
#include"p3.h"
#define SIZE 7

int main()
{
int arr[SIZE] ={1,2,3,4,5,6,7};

assert(min_array(arr, SIZE) == 1);
assert(max_array(arr, SIZE) == 7);
}

