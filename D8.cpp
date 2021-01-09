#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char a[100][100],b[100][100];
	int count[1000];
	for(int s=0;s<1000;s++)
	{count[s]=0;
	}
	char group[1000000];
	char ch;
	int i=0;
	int q=0;
	while((ch=getchar())!=EOF)
	{
	ch=tolower(ch);
	if(ch<='z'&&ch>='a')
		{
		a[i][q]=ch;
	    q++;
	}
	else{
	i++;
	q=0;
	if(a[i-1][0]=='\0')
	i--;
	}    }
	 int max;
	for(int num1=0;num1<i;num1++)
	{
		for(int num2=num1;num2<i;num2++)
		{int s=strcmp(a[num1],a[num2]);
		 if(s==0)
		 count[num1]++;
		}
	}
	max=0;
	for(int s=0;s<i;s++)
	{
		if(count[s]>=count[max])
	         max=s;
	}
	printf("%s %d",a[max],count[max]);
}	
