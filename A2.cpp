#include <stdio.h>
int main()
{
 int m,a[10000][3];
  int x,y,z;
 scanf("%d",&m);
 for(int i=0;i<m;i++)
{
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&z);
if(x+y>z&&x+z>y&&y+z>x)
{

if(x*x+y*y==z*z||x*x+z*z==y*y||y*y+z*z==x*x)
printf("Yes\n");
else 
printf("No\n");
}	
else 
printf("No\n");
}}	

