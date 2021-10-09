#include <stdio.h>
#include <assert.h>
#include "p6.h"

#define SIZE 4
int main()
{
    int arr[SIZE] = {1,2,3,4};

    assert(linear_search_array(arr, SIZE, 1) == 1);
    assert(linear_search_array(arr, SIZE, 2) == 1);
    assert(linear_search_array(arr, SIZE, 9) == 0);
    assert(linear_search_array(arr, SIZE, 7) == 0);

}
