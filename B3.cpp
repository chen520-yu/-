#include<stdio.h>
int main()
{
	int m,n,num;
	int ce=0;
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
		scanf("%d%d",&m,&n);
		int cc=m;
		while(cc<=n)
		{
		   int bai=cc/100;
		   int shi=(cc%100)/10;
		   int ge=cc%10;
			if(bai*bai*bai+shi*shi*shi+ge*ge*ge==cc)
			{
			ce++;
			printf("%d ",cc);}
			cc++;
		}
		if(ce==0)
		printf("-1");
		printf("\n");	
	}	
}

