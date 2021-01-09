#include<stdio.h>
int main()
{
	  int m,a[20],n=0,f;
	  f=0;
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
		
		if(a[i]>=0)
		{if(a[i]>f&&a[i]>=n)
		
		n=a[i];
		}
		
		else
		{ f=-a[i];
		if(f>n)
		n=a[i];
		}}

	printf("%d\n",n);
	
}



