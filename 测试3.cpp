#include<stdio.h>
void shun(int a,int*ll); 
int main ()
{
	int a[10]={9,8,7,4,1,5,1,0,4,6};
	int *l;
	l=a;
	shun(10,a);
	printf("%d",a[8]);
	
	
	
	
	
	
}
void  shun(int m,int a[])
{
	int max;
	max=0;
	for(int i=0;i<m;i++)
	{
		if(a[i]>a[max])
	max=i;
	}
	if(m>=1)
	{
	int cc=a[m-1];
	a[m-1]=a[max];
	a[max]=cc;
}
     m--;	
	if(m==0) 
	return;
return shun(m,a);
}

