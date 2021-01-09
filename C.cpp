#include <stdio.h>
int main ()
{
	
	int i,n,p;
	char a[100];
	printf("ÊäÈëÊý×Ö£º"); 	 	
	scanf("%d",&n); 
	printf("YES\n");
	begin:
	printf("ÊäÈë×Ö·û´®£º\n");
	scanf("%s",a);
	if(a[0]=='S'&&a[1]=='C'&&a[2]=='U')
	printf("YES\n");
	else{
	
	i=0;
	while(a[i]=='A')
     {
	 i++;}
	 i--;
	 n--;
     if(a[i+1]=='S'&&a[i+2]=='C'&&a[i+3]=='U'&&i+1+i+1+2==n)
	{p=n;
	while(a[p]=='A')
	{p--;
		}	
	p++;
	if(p+i==n)
	printf("YES\n");}
else
printf("NO\n");	
	
	
	goto begin;} 
	return 0;
}
