#include<stdio.h>
#include<string.h>
int zhishu(int a);
int main()
{
long int n;
	int x=1,y;
	scanf("%ld",&n);
	if(n<6||n%2!=0)
	printf("ERROR");
	else
	{
		while(x<n/2-1)
		{x=x+2;
		y=n-x;
		if(zhishu(x)==1&&zhishu(y)==1)
		{printf("%d %d\n",x,y);
		}	
	}
	}}
		
int zhishu(int a)
{int i;
	for(i=2;i<a;i++) 
	{
	if(a%i==0)
	break;
	}
	if(i==a)
	return 1;
	else return 0;	}		

