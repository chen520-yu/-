#include<stdio.h>
#include<string.h> 
int main()
	{
	int  neirong1,neirong2
	char name[100],id[100],cheng[100],search1[100];
	printf("学生数：");
	scanf("%d",&n);
	printf("        输入需要查询的内容"); 
	scanf("%s",search);
	printf("成绩   身份证号   成绩：\n"); 
	scanf("%s",name);
	scanf("%S",id);
	scanf("%s",cheng);
	neirong1=search(name,search1);
	neirong2=search(id,search1);
	neirong2=search(cheng,search1);
	len=stelen(search1);
	if(len<=3)
	
	

	
	
	int search(char a[],char b[])
	{int i,j,len=strlen(b);
	while(a[i])
	{
		for(j=0;j<len;j++)
 {
 if(a[i+j]!=b[j]) 
 break;}
 if(j>=len)
 return i+1;
 else 
 i++;
	}
	return -1;
		}












