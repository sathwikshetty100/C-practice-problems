#include<stdio.h>
#include<conio.h>
#include"p11.h"
float current(float unit)
{
    float price;
    if(unit<=200)
{
price=unit;
return price;
}
else if(unit>200 && unit<=300)
{

price= unit * 1.5 ;
return price;

}
else if(unit>300)
{
price=2*unit;
return price;


}
}
