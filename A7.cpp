#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	getchar();
	int a[n];
	for(int i=0;i<n;i++)
	{scanf("%d",&a[i]);
	int hui=0;
	int m=a[i];
	while(m>0)
	{
		hui=hui*10+m%10;
		m=m/10;
	}
	if(hui==a[i])
	printf("yes\n");
	else
	printf("no\n");
	}
	
}
