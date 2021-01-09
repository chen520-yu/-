#include<stdio.h>
#include<string.h>
int main()
{int n,i,p,m,len,q;
char a[9999],b[20000];
scanf("%d",&n);
q=0;
for(i=0;i<n;i++)
{
	scanf("%s",a);
	len=strlen(a);
	p=len%2;
	
	if(p==0)
	{
		for(m=0;m<=len/2-1;m++)
		{
		if(a[m]!=a[len-1-m])
		{
		m--;
		break;}}
		m--;
		if(m==len/2-1)
	{
	b[q]='Y';
	b[q+1]='E';
	b[q+2]='S';
	q=q+3;}
		else
		{
		b[q]='N';
	b[q+1]='O';
	b[q+2]=' ';
	q=q+3;}
	}
	
		if(p!=0)
	{
		for(m=0;m<=(len-1)/2-1;m++)
		{
		if(a[m]!=a[len-1-m])
		{ m--;
		break;}} 
		m--;
		if(m==(len-1)/2-1)
	{
		b[q]='Y';
	b[q+1]='E';
	b[q+2]='S';
	q=q+3;}
		else
		{
			b[q]='N';
	b[q+1]='O';
	b[q+2]=' ';
	q=q+3;}
	}
	

}
printf("\n");
for(i=0;i<=3*n-1;i=i+3)
	{
	printf("%c%c%c\n",b[i],b[i+1],b[i+2]);
}





}

