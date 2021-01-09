#include<stdio.h>
int shun(int *ll,int m);
int main()
{
	int a[4];
	int num;
	scanf("%d",&num);
	getchar();
	for(int i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	int *zz;
	zz=a;
	int m=0;
	int wu=shun(zz,m); 
	printf("%d %d %d %d",a[0],a[1],a[2],a[3]);
	printf("\n%d %d",m,*zz);
}
int shun(int *ll,int m)
{
	
	if(*(ll+m)>=*(ll+m+1)&&m<3) 
		*(ll+m)=*(ll+m+1);
		m++;	
	if(m=3)
	m=0;
	if(*(ll)>=*(ll+1)||*(ll+1)>=*(ll+2)||*(ll+2)>=*(ll+3))
	return shun(ll,m);
	else return 1; 
}





