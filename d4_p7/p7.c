#include<stdio.h>
#include"p7.h"
int binary_search_array(int a[],int item)
{
int  n, beg, mid, end, i;


    beg = 0;
    end = n-1;
    mid = (beg + end) / 2;
    while ((beg<=end) && (a[mid]!=item))
    {
        if (item < a[mid])
            end = mid - 1;
        else
            beg = mid + 1;
        mid = (beg + end) / 2;
    }
    if (a[mid] == item)
        return 0;
    else
        return 1;
}
