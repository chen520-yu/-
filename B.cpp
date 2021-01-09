#include <stdio.h>
int main ()
{m:
	int a[10],i,p,q;
cc:
		printf("输入五个数字\n"); 
	for (i=0;i<5;i++)
		scanf("%d",&a[i]);
if(a[0]==0&&a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0)
goto mp;
else{q=a[1]-a[0];
p=a[1]/a[0];
if(a[1]==a[0]+q&&a[2]==a[1]+q&&a[3]==a[2]+q&&a[4]==a[3]+q) 
{if(a[1]==a[0]*p&&a[2]==a[1]*p&&a[3]==a[2]*p&&a[4]==a[3]*p)
for (i=5;i<10;i++)
	{a[i]=a[i-1]+q;
		printf("%d ",a[i]);
		}
		goto cc;
}
if(a[1]==a[0]+q&&a[2]==a[1]+q&&a[3]==a[2]+q&&a[4]==a[3]+q) 
if(a[2]==a[1]+a[0]&&a[3]==a[2]+a[1]&&a[4]==a[3]+a[2])
{
	printf("case three\n");
	for (i=5;i<10;i++)
	{a[i]=a[i-1]+a[i-2];
	printf("%d",a[i]);
	}
	goto cc;
}
if(a[1]==a[0]*p&&a[2]==a[1]*p&&a[3]==a[2]*p&&a[4]==a[3]*p)
{if(a[2]==a[1]+a[0]&&a[3]==a[2]+a[1]&&a[4]==a[3]+a[2])
{
	printf("case three\n");
	for (i=5;i<10;i++)
	{a[i]=a[i-1]+a[i-2];
	printf("%d",a[i]);
	}
	goto cc;
}

	if(a[1]==a[0]+q&&a[2]==a[1]+q&&a[3]==a[2]+q&&a[4]==a[3]+q)
    {printf("case one\n");
	for (i=5;i<10;i++)
	{a[i]=a[i-1]+q;
		printf("%d ",a[i]);
		}
		printf("\n");}
	p=a[1]/a[0];
	if(a[1]==a[0]*p&&a[2]==a[1]*p&&a[3]==a[2]*p&&a[4]==a[3]*p)
			{
				printf("case two\n");
				for (i=5;i<10;i++)
				{
				a[i]=a[i-1]*p;
				printf("%d ",a[i]);}
				printf("\n");
			}

if(a[2]==a[1]+a[0]&&a[3]==a[2]+a[1]&&a[4]==a[3]+a[2])
{
	printf("case three\n");
	for (i=5;i<10;i++)
	{a[i]=a[i-1]+a[i-2];
	printf("%d",a[i]);
	}
}

goto cc;




}
	mp:
		return 0;
	}

}












