#include<stdio.h>
#include"p5.h"
int power(int base, int a)
 {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
