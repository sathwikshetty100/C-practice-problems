#include <stdio.h>
#include <stdlib.h>
#include"p4.h"


int main()
{


     int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = {1,2, 3,7,8,9};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    printUnion(arr1, arr2, m, n);

    printIntersection(arr1, arr2, m, n);
}


