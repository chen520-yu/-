#include<stdio.h>
int main()
{ 
char a[100000];
int i=0;
int x=0;
	while(scanf("%c",&a[i]),a[i]!='\n')
	i++;
	while(1)
	{
	while(a[x]<'A'||(a[x]>'Z'&&a[x]<'a')||a[x]>'z')
	x++;
	int m=x;
	while((a[m]<='Z'&&a[m]>='A')||(a[m]>='a'&&a[m]<='z'))
	m++;
	char b[100000];
	for(int f=x;f<m;f++)
	{b[f]=a[f];
	}
	int c;
	c=0;
	for(int o=x;o<m;o++)
	{
	a[o]=b[m-1-c];
		c++;
	}
	x=m;
	if(m>=i)
	break;

}
		for(int l=0;l<i;l++)
	printf("%c",a[l]);
	
}


