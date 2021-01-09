#include<stdio.h>
int main()
{
	int n,i,p,w,high,low;
	char m[10],namehigh[10],namelow[10],q[100],idhigh[100],idlow[100];
	printf("学生数：");
	scanf("%d",&n);
	if(n>=1&&n<=100)
	{
	printf("请输入学生姓名 身份证号 成绩：\n");
	high=0;
	low=410;
	for(i=0;i<n;i++)
	{
		scanf("%s",m);
		scanf("%s",q);
		scanf("%d",&w);
       if(w>high)
{high=w;
sprintf(namehigh,"%s",m);
sprintf(idhigh,"%s",q);
}
	if(w<low)
	{low=w;
sprintf(namelow,"%s",m);
	sprintf(idlow,"%s",q);
	}}
	printf("%s %s %d\n",namehigh,idhigh,high);
	printf("%s %s %d",namelow,idlow,low);}
	else
	printf("wrong");
	


}
