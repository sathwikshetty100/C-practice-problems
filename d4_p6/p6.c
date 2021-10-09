#include"p6.h"
int linear_search_array(int arr[], int size, int element)
{
    int i;

    for(i = 0; i< size; i++)
    {
        if(arr[i] == element)
            return 1;
    }
    return 0;
}
