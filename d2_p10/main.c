#include<stdio.h>
#include<math.h>

 float cube()
 {
  float a=5;
  float V;
  V=a*a*a;
  return V;
 }
 float cuboid()
 {
  float l=3,b=4,h=5;
  float V;

  V=l*b*h;
  return V;
 }
 float cylender()
 {
  float r=3,h=4;
  float V;

  V=3.14*r*r*h;
  return V;
 }
 float sphere()
 {
  float r=5;
  float V;

  V=(4*3.14*r*r*r)/3;
  return V;
 }
 float cone()
 {
  float r=3,h=4;
  float V;

  V=(3.14*r*r*h)/3;
  return V;
 }
 float display(float V)
 {
  printf("Volume is = %f\n",V);
 }

int main()
{
 int ch;
 float res;


 while(1)
 {
  printf("Select the shape \n");
  printf(" 1 CUBE\n");
  printf(" 2 CUBOID\n");
  printf(" 3 CYLINDER\n");
  printf(" 4 SPHERE\n");
  printf(" 5 CONE\n");
  scanf("%d",&ch);

   switch(ch)
     {
         case 1: res=cube();
         break;
         case 2: res=cuboid();
         break;
         case 3: res=cylender();
         break;
         case 4: res=sphere();
         break;
         case 5: res=cone();
         break;
         default: printf("Wrong input");

     }
 if(ch>=1 && ch<=5)
   display(res);


 }

}
