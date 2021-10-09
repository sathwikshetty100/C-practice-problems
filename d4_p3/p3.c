#include<stdio.h>
#include"p3.h"
int min_array(int arr[], int size)
{
    int i, min;

    if(size < 0)
        return -1;

    min = arr[0];

    for(i=1 ; i< size; i++)
    {
        if(min > arr[i])
            min = arr[i];
    }
    return min;
}

int max_array(int arr[], int size)
{
    int i, max;

    max = arr[0];

    for(i=0; i<size; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }

    return max;
}
