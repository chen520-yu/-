#include<stdio.h>
void  shun(int m,int a[]);
int main()
{
	int num,ji[1000],ou[10000];
	scanf("%d",&num);
	getchar();
	int a[1000];
	char tmp;
	int j=0,o=0,p;
	for(int i=0;i<num;i++)
	{
		p=0;
			for(p=0;;p++)
			{
			scanf("%d%c",&a[p],&tmp);
		    if(tmp=='\n')
		break;
		}
		p++;
		j=0;
		o=0;
        for(int m=0;m<p;m++)
      {int pp;
	  pp=a[m]%2;
      	if(pp!=0)
      {ji[j]=a[m];
      j++;
	  }
	  if(pp==0)
	  {ou[o]=a[m];
	  o++;
	  }
	  }
	  shun(j,ji);
	  shun(o,ou);
	  for(int h=0;h<j;h++)
	  printf("%d ",ji[h]);
	  for(int b=0;b<o;b++)
       printf("%d ",ou[b]);
      printf("\n");

}}
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
	if(m<=0) 
	return;
return shun(m,a);
}







