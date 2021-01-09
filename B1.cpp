#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,len,m;
	char a[200]={0},b[200];
	scanf("%d",&n);
	getchar();
	gets(a);
	len=strlen(a);
	m=-1;
	for(i=0;i<len-n;i++)
	{
		b[i]=a[i];
	}
	for(i=len-n;i<len;i++)
	{
	m++;
	a[m]=a[i];
	}
	m=-1;
	for(i=n;i<len;i++)
	{m++;
		a[i]=b[m];
		
	}
	printf("%s",a);
}
