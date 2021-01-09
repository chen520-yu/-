#include<stdio.h>
#include<math.h>
int main()
{

double x;
double s=modf(3.415416,&x);
int n=int(x);
	 printf("%d，%lf",n,s);
}
//exp（） 为e的幂
//log （）e
//为指数 
// 



//pow(3，2)=9计算幂
//sqrt计算平方根
// 
/*ceil（）大于等于某个数的整数
floor小于等于
a=modf（3.152，&b）则a=0.125，b=3
fmod（5.5，2.2）=1.1取余数
%只能求整数
这些都为double类型
asin（）反函数
fabs（）绝对值
<ctype.h>表示字符处理函数，isalnum（）判断是否为数字或字母
isalpha()判断是否为字母tolower（）转化为小写字母
toupper（）转大写字母
<string.h>strchr搜索函数
char *p p=strchr（字符串名称，'搜索的字母'）
p=该字母的位置memchr（  同，同 ，搜索的范围）
strspn（，"字符串")返回第一个不是该组字符串的下标 
strcspn则相反
strstr（，“字符串”）如果有则为第一个字符的下标，否则为空 
*/ 





 
