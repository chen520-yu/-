#include<stdio.h>
#include<string.h>
void shun(int a[],int m);
int main ()
{
	int a,b;
	int num1[1000],num2[1000];
	scanf("%d%d",&a,&b);
	getchar();
	for(int i=0;i<a;i++)
	{scanf("%d",&num1[i]);
	}
	getchar();
	for(int i=0;i<b;i++)
	{scanf("%d",&num2[i]);
	}
	for(int i=a,c=0;i<a+b;i++,c++)
	{
	num1[i]=num2[c];
	}
	int m=a+b;
	int l=m;
	shun(num1,m);
	printf("%d",num1[0]); 
	for(int i=1;i<l;i++)
	{printf(" %d",num1[i]) ;
	}
	
}
void shun(int a[],int m)
{
	int max=0;
	for(int i=0;i<m;i++)
	if(a[i]>a[max]) max=i;
	int maxi=a[m-1];
	a[m-1]=a[max];
	a[max]=maxi;
	m--;
	if(m==0) return ;
	else return shun(a,m);
}
