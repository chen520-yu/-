#include<stdio.h>
int main()
{
	float n;
	float a[1000];
	scanf("%f",&n);
	getchar();
	for(int i=0;i<n;i++)
	{scanf("%f",&a[i]);
	}
	int m=0;
	for(int i=0;i<n;i++)
	{
		m=m+a[i];
	}
     float p=m/n;
	printf("%3.2f",p);
	
	
}










