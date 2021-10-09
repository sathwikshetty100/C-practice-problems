#include "op.h"
int stringlowercase(char *s)
{
	static int i=0;
	if(s[i])
    {
    	if(s[i]>=65 && s[i]<=90 )
           s[i++]+=32;
         stringlowercase(s);
    }
}
