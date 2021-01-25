#include<stdio.h>
int main(void)
{  int sum,q; //(i判断有多长) (k，j，n,q均为后面计数） 
 char str[101],*p,len,i,k,j,n;
 p=str;
 printf("请输入所需要检测的字符串个数（整数且小于十）");
 scanf("%d",&sum);
 while(sum>=10){printf("请输入所需要检测的字符串个数（整数且小于十）");
 scanf("%d",&sum);
 }
 for(q=1;q<=sum;q++){
 	scanf("%s",str);
for(i=1;p[i]!='\0';i++);//判断字符数组有多长(l为输入的字符串长度） 
if(i==3){
	if (p[0]=='S'&&p[1]=='C'&&p[2]=='U')
	printf("YES\n");
	else
	printf("NO\n"); 
	}//当输入刚好为三个时，直接判断是否为SCU
else 
{
for(k=0;k<100;k++)
if(p[k]=='S'&&p[k+1]=='C'&&p[k+2]=='U')//当在前100个字符中找到了连续三个字母“SCU”时，停止 
break;
for(j=k;p[j-1]=='A';j--);//若j=0，则证明S前面的字母都为A
for(n=k+3;p[n]=='A';n++);//若n=l（字符串长2度），则证明S前面的字母都为A
{if(j==0&&n==i)
printf("YES\n");
else 
printf("NO\n");}}
 }
 return 0;
 } 
