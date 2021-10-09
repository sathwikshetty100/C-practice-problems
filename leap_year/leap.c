#include<stdio.h>
#include "leap.h"
int leap_year(int year)
{
    if(year % 400 == 0){
        return 1;
    }
    else if(year % 4 == 0){
        return 1;
        }
    else if(year % 100 == 0){
        return 2;
    }
    else{
        return 2;
    }


}
