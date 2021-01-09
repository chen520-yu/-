#include<stdio.h>
#include<string.h>
int main()
{
int r,c,i,m,n,b[1000],q,x,o,a[10][10];
char mingling[2];
scanf("%d%d",&r,&c);
 for(i=0;i<r;i++)
{for(m=0;m<c;m++)
{scanf("%d",&a[i][m]);}
}
 scanf("%d",&x);
 for(q=0;q<x;q++)
 {
 scanf("%s",mingling);
 if(strcmp(mingling,"SR")==0)
 { scanf("%d",&m);
 scanf("%d",&n);
 m--;
 n--;
 	for(i=0;i<c;i++)
 	{
 	 b[i]=a[m][i];
 	 a[m][i]=a[n][i];
 	 a[n][i]=b[i];
	 }
 }
  if(strcmp(mingling,"SC")==0)
 { scanf("%d",&m);
 scanf("%d",&n);
 m--;
 n--;
 	for(i=0;i<r;i++)
 	{
 	 b[i]=a[i][m];
 	 a[i][m]=a[i][n];
 	 a[i][n]=b[i];
 }
}
 if(strcmp(mingling,"DR")==0)
 { scanf("%d",&m);
 m--;
 while(m<r)
 {
 for(i=0;i<c;i++)
 {
 	a[m][i]=a[m+1][i];
	 a[r-1][i]='0';	
 }
 m++;}
 r--;
}
 if(strcmp(mingling,"DC")==0)
 { scanf("%d",&m);
 m--;
 while(m<c-1)
 {
 for(i=0;i<r;i++)
 {
 	a[i][m]=a[i][m+1];	
 a[i][c-1]='0';	 }
 m++;}
 c--;
}
 if(strcmp(mingling,"IR")==0)
 {
 	scanf("%d",&m);
 	m--;
    for(i=r;i>m;i--)
 	{
 	   for(n=0;n<c;n++)
 		{
		 a[i][n]=a[i-1][n];}
	 }
 	 for(n=0;n<c;n++)
 		{
 			a[m][n]=0;}
 r++;
 }
if(strcmp(mingling,"IS")==0)                                                    
  {
 	scanf("%d",&m);
 	m--;	  
    for(i=c;i>m;i--)
 	{
 	   for(n=0;n<r;n++)
 		a[n][i]=a[n][i-1]; 
	 }
 	 for(n=0;n<r;n++)
 		{
 			a[n][m]=0; }
 c++;
 }
 }
 for(i=0;i<r;i++)
 {
 	for(m=0;m<c;m++)
 	{
	 printf("%d ",a[i][m]);
 }
 printf("\n");}
 
} 
