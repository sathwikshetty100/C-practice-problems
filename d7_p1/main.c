#include<assert.h>
#include<stdlib.h>

#include "p1.h"
#define SIZE_ARRAY_ONE 10
#define SIZE_ARRAY_TWO 20
#define size 5

int main()
{
    int *arr_one, *arr_two;
    int *array[size]={1,2,3,4,5};
    int i;
    Min_max test_minmax;

   arr_one = store_array_dynamically(SIZE_ARRAY_ONE);
   arr_two = store_array_dynamically(SIZE_ARRAY_TWO);

    assert(arr_one != NULL); // test for memory located successfully

    assert(*(arr_one + 0) == 1);
    assert(*(arr_one + 5) == 6);
    assert(*(arr_one + 9) == 10);


    for(i=0; i< SIZE_ARRAY_ONE;i++)
        assert(*(arr_one+i) == i+1);

    for(i=0; i< SIZE_ARRAY_TWO;i++)
        assert(*(arr_two+i) == i+1);



    assert(search_array_dynamically(arr_one, SIZE_ARRAY_ONE, 8) == 1);
    assert(search_array_dynamically(arr_one, SIZE_ARRAY_ONE, 11) == 0);


    test_minmax = min_max(arr_one, SIZE_ARRAY_ONE, test_minmax);
    assert(test_minmax.min == 1);
    assert(test_minmax.max == 10);
    assert(sum_of_array(*array,size)==15);
    assert(even_odd_sum(*array,size)==15);
    assert(pallindrome(*array,size)==1);

    free(arr_one);
    free(arr_two);

    assert(arr_one != NULL);

    arr_one = arr_two = NULL;

    return 0;
}
