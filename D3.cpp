#include<stdio.h>
#include<string.h>
int main()
{
	char a[100000];	
	int i=0;
	while(scanf("%c",&a[i]),a[i]!='\n')
	i++;
	int len;
	len=strlen(a)-1;
printf("%d",len);
}





