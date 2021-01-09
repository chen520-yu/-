
#include <stdio.h>
#include <stdlib.h>
void comb(int deep, int n, int m);
int main()
{
    int i,m,n,c,b[100];
    char a[m][n];
    scanf("%d",&m);
    for(i=0;i<m;i++)
    { 
	
	scanf("%d",&b[i]); 
    for(c=0;c<b[i];c++)
    {scanf("%s",a[i][c]);
	}
	}
    for(c=0;c<m;c++)
    {
    for(i=b[c]; i>=0; i--){
        comb(0,b[c],i);
    }}
    printf("\n");
    return 0;
}


#define N  4
int results[N] = {0}; //保存已经找到的结果前缀数组
int results_end = 0; //结果前缀数组有效数据下标
/**
 * 组合
 * @param deep 递归深度
 * @param n 数组最大长度
 * @param m 要查找的组合的长度
 */
void comb(int deep, int n, int m,int a[][100])
    {
	int i,v;
    i=0;
    for(v=0;v<n;v++)
    {if (deep > n) // 越界递归结束
        return ;
    if (results_end == m) // 找到结果，打印，递归结束
    {printf("-->");
        for (i = 0; i < m; i++)
        {
            printf(" %d", results[i]);
        }
        printf("\n");
        return ;
    }
    results[results_end++] = a[v][deep];
    comb(deep+1, n, m); //向下一级递9归
    results_end--;
    comb(deep+1, n, m); //向下一级递归
}}


