#include<stdio.h>
#include<string.h>

void chengfa(char *a,char*b)
{
 char c[10000];
 int fuhao1,fuhao2;
 if(a[0] == '-' || a[0] == '+') {
  if(a[0] == '-')
   fuhao1 = -1;
  else fuhao1 = 1;
  strcpy(c,a+1);
  strcpy(a,c);
 }
 if(b[0] == '-' || b[0] == '+') {
  if(b[0] == '-')
   fuhao2 = -1;
  else fuhao2 = 1;
  strcpy(c,b+1);
  strcpy(b,c);
 }
 int i , j;
 for(i = 0; i< 10000;i++){
  c[i] = '0';
 }
 int lena = strlen(a);
 int lenb = strlen(b);
 for(i = lena-1;i >=0;i--){
  int k = 0;
  for(j = lenb-1;j >=0;j--) {
   char l = c[i+j+1];
   c[i+j+1] = (c[i+j+1]-'0'+(b[j]-'0')*(a[i]-'0')+k)%10+'0';
   k = (l-'0'+(b[j]-'0') * (a[i] -'0')+k)/10;
  }
  if(k!= 0) c[i] += k;
 }
 i = 0;
 j = 0;
 while(c[i] == '0') i++;
 while(i <= lena+lenb-1) {
  a[j] = c[i];
  j ++;
  i ++;
 }
 a[j] = '\0';
 if(a[0] == '\0') a[0] = '0',a[1] = '\0';
 if(fuhao1*fuhao2 == -1 && a[0] !='0') {
  strcpy(c,a);
  a[0] = '-';
  a[1] = '\0';
  strcat(a,c);
 }
}

int main()
{int n,i;
 char a[10000],b[10000];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
 scanf("%s  %s",a,b);
 
  chengfa(a,b);
  printf("%s\n",a);
 }
}


