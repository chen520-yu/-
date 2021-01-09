#define GENERIC(type) type type##_max(type x,type y)\
                         {\
                         	return x>y?x:y;        \
                         }
GENERIC(int);
						 
#include <stdio.h>
int main ()
{

printf("%s%s",__TIME__,__DATE__);
printf("%d",int_max(3,5));
} 


