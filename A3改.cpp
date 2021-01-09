#include<stdio.h>
int main()
{

	int a,b,c,d,m;
	int num;
	scanf("%d",&num);
	getchar();
	int i=0;
	int x,y,z,w,l,p;
	while(i<num)
 {
 m=0;
 scanf("%d%d%d%d",&a,&b,&c,&d);
 if(a>b)     
  {
    int x=a;
  a=b;
  b=x;}
 if(a>c)     
  {
  int y=a;
  a=c;
  c=y;}
 if(a>d)   
 {
 int z=a;
  a=d;
  d=z;}
 if(b>c)    
  {
  int w=b;
  b=c;
  c=w;}
 if(b>d)    
  {
  int p=b;
  b=d;
  d=p;}
 if(c>d)     
  {
  int l=c;
  c=d;
  d=l;}
 printf("%d %d %d %d\n",a,b,c,d);

i++;
}
		
}

