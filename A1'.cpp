#include<stdio.h> 
#include<string.h>
int main()
{int n,i,len1,len2,j,z,len3,tmp1,tmp2;;
char num1[]={0},num2[]={0},num3={0};
scanf("%d",&n);
for(z=0;z<n;z++)
{
	scanf("%s",num1);
	scanf("%s",num2);
	len1=strlen(num1);
	len2=strlen(num2); 
for ( i=0;i<len1;i++)  
            {  
                for(int j = 0;j<len2;j++)  
                {  
                    tmp1=num1[i]*num2[j]/10;//这里是会进位的情况 
                    tmp2=num1[i]*num2[j]%10;//本位  
                    num3[i+j] = num3[i+j]+tmp2;  
                    num3[i+j+1] = num3[i+j+1]+tmp1;   //注意i+j+1
                }  
            }               
            len3=strlen(num3);
            
	for (int m = 0; m < num3.length-1; m++)  
            {  
                 tmp1 = num3[m]/10;//进位  
                 tmp2 = num3[m]%10;//本位  
                num3[m] = tmp2;  
                num3[m+1] = num3[m+1] + tmp1;  
            }  
          printf("%s\n",num3);   
        }      		       
	
}










}
























