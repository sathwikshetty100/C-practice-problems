#include<stdio.h>

#include "p3.h"

void generate_pattern(int row_size)
{
    int i, j;

    for(i = row_size; i >= 1; i--) {
        for(j=0; j < i; j++)
            printf("* ");
        printf("\n");
    }
}
