#include<stdio.h>

int main()
{
	int num,ji[1000],ou[10000];
	scanf("%d",&num);
	getchar();
	int a[1000];
	int j=0,o=0;
	for(int i=0;i<num;i++)
	{
		char cc[1000]={0,0,0,0,0,0,0,0,0,0,0,0,0,0};
        int p=0;
        while(scanf("%c",&cc[p]),cc[p]!='\n')
        p++;
        char bb[1000]={0,0,0,0,0,0,0,0,0,0,0};
        int forb=0;
		for(int wu=0;wu<p;wu++)
        {
		if(cc[wu]>='0'&&cc[wu]<='9')
         {
		 bb[forb]=cc[wu];
		 forb++;	}
	}
	
        for(int i=0;i<forb;i++)
        a[i]=bb[i]-'0';
        for(int m=0;m<forb;m++)
        {
		
        printf("%d ",a[m]);
}}}











