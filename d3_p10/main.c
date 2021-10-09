#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int ch;
double n,x,ans;

printf("\n1.Power\n2.square root\n3.Floor\n4.Ceil\n5.Exit");
while(ch!=5)
{
printf("\nEnter your Choise:");
scanf("%d",&ch);
switch(ch)
{
case 1:printf("\nEnter number and Power:");
scanf("%lf%lf",&x,&n);
ans=pow(x,n);
printf("\nPower is:%lf",ans);
break;
case 2:printf("\nEnter Number :") ;
scanf("%lf",&n);
ans=sqrt(n);
printf("\n %lf is square root of %lf",ans,n);
break;
case 3:printf("\nEnter Number:");
scanf("%lf",&n);
ans=floor(n);
printf("\n%lf floor is %lf",n,ans);
break;
case 4:printf("\nEnter Number:");
scanf("%lf",&n);
ans=ceil(n);
printf("\n%lf ceiling is %lf",n,ans);
break;
case 5:printf("\nExit");
exit(0);
}
}
getch();
}
