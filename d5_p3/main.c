#include<stdio.h>
#include<conio.h>

void upper(char[]);

void upper(char str[20])
{
            int i;
            printf("%s in upper case is ",str);
            for(i=0;str[i];i++)
            {
                        if(str[i]>96 && str[i]<123)
                                    str[i]-=32;
            }
            printf("%s",str);
}
int main()
{
            char str[20]="sathw";

            printf("Enter string : ");
            gets(str);
            upper(str);
            getch();
            return 0;
}

