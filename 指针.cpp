#include<stdio.h>
#include<string.h>
int hui(long int a);
long int shun(long int num,long int a[100]);
int main ()
{
	char str[100000],stc[10000];
	long int i,count,a[100];
	int p,q,r;
	int tmp;
	int num1=0;
	int pan=0;
	int pp;
while(scanf("%c",&str[pan]) ,)
{pan++;
}
	r=0;
	count=0;
	while(1)
	{
		while(str[r]&&(str[r]<'0'||str[r]>'9'))
		r++;
		if(str[r])
		{
			p=r;
			q=r+1;
			a[count]=str[r]-'0';
			while(str[q]>='0'&&str[q]<='9')
			{a[count]=10*a[count]+(str[q]-'0');
			q++;
			}
			r=q;
			count++;
		}
		else 
		break; 
	}
	
	long int b[100]={0};
	int num2=0;
	int ceshi1;
	for( ceshi1=0;ceshi1<count;ceshi1++)
	{
	if(a[ceshi1]>100) 
	{b[num2]=a[ceshi1];
		num2++;
    }}
	long int num3=0,c[100]={0};
	for(int i=0;i<num2;i++)
	{if(hui(b[i])==1)
	{c[num3]=b[i];
	num3++;
	}
	}
    int d[num3+1]={0};
    for(int x=0;x<num3+1;x++)
	{d[x]=1;
	}
	int max=0;
	if(num2==0)
	printf("None");
	else
	{
	for(int i=0;i<num3;i++)
		{
		for(int m=i+1;m<num3;m++)
		{
			if(c[i]==c[m])
			d[i]++;
		}}
	for(int k=0;k<num3;k++)
		{
			if(d[k]>max)
			max=d[k];
		}
	long int e[100],num4=0;
		for(int i=0;i<num3;i++)
		{ if(d[i]==max)
		{
		e[num4]=c[i];
		num4++;
		}}
		long int *ll;
		ll=e;
		int zui=num4;
	int cc=shun(num4,ll);	
		for(int j=0;j<zui;j++)
		{printf("%ld %d\n",e[j],max);
		}
}
	 	
}

long int shun(long int num,long int *mm)
{
	int max=0;
	for(int i=0;i<num;i++)
	if(*(mm+i)>max) max=*(mm+i);
	*(mm+num-1)=max;
	num--;
	if(num)
	return shun(num,mm);
	else return 0;
}
int hui(long int a)
	{
	int sum=0;
	int m;
	m=a;
	while(m>=1)
	{sum=sum*10+m%10;
	m=m/10;
	}
	if(sum==a&&a!=0)
	return 1;
	else return 0;
}


