	#include<stdio.h>
	#include<math.h>
	int zhi(int a);
	int main()
	{
		double num1,num2;
		int n;
		scanf("%d",&n);
		getchar();
		for(int i=0;i<n;i++)
		{
		scanf("%lf",&num1);
		int m=2;
		double s;
		for(m;;m++) 
		{
			if(zhi(m)==1)
			s=num1/m;
			if(floor(s)==s)
			{
				printf("%d",m);
				num1=num1/m;
				break;
			}}
			
			while(1)
			{
				m=2;
			for(m=2;;m++) 
		{
			if(zhi(m)==1)
			s=num1/m;
			if(floor(s)==s)
			{
				printf("*%d",m);
				num1=num1/m;
				break;}
				if(num1==1)
			break;  	}
			if(num1==1)
			break;  
	}
		printf("\n");		
		}
	}
	int zhi(int a)
	{int l;
		for( l=2;l<=a;l++)
		{
		int m=a%l;
		if(m==0)
		break;
		}
		if(l==a)
		return 1;
		else
		return 0;
	}

