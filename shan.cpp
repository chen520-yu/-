#include<stdio.h>
#include<math.h>
int main()
{

double x;
double s=modf(3.415416,&x);
int n=int(x);
	 printf("%d，%lf",n,s);
}


//fabs计算绝对值 
//exp地幂 
//pow(3,2)=9x计算幂
//sqrt计算平方根
// ceil//大于等于
//floor小于等于 
//log
//modf（3.1521，&ij）==0.1521，ij=0; 

      


 
