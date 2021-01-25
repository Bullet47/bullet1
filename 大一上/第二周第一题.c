#include<stdio.h>
#include<string.h>
int main(void)
{ int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  char a[5000] ,b[5000];
  int la,lb;
  int i,j;
  int a1[5000],b1[5000];//前者a*b,后者b*a 
  scanf("%s%s",a,b);//读取两个整数
  la=strlen(a);
  lb=strlen(b);//读取两整数有多长 
  int c[la+lb];
  memset(c,0,sizeof(c));//必须初始化 要不然会乱 是将该数组清0 全部清成空字符 即里面没有东西 memset函数是一键初始化 
  for(i=0;i<=la-1;i++)
  { a1[la-i-1]=a[i]-48; 
   } 
   for(i=0;i<=lb-1;i++)
  { b1[lb-i-1]=b[i]-48; //真实值等于char型减48!!!
   } //自此完成数列反向 
    for(i=0;i<=la-1;i++)
     {
       for(j=0;j<=lb-1;j++)
       {
       	c[i+j]+=a1[i]*b1[j];
	   }
	 }
 for(i=0;i<=(la+lb-1);i++)
 {if (c[i]>10)
	{
		c[i+1]+=c[i]/10;//因为是int型，所以会忽略小数。//不是四舍五入 是直接省略 及只管个位相加 大于十时进位 
		c[i]%=10; 
	}
 }
 i=la+lb-1;
 if(c[la+lb-1]==0)//没搞清楚为什么必须要拿出来写才是对的 
 i--;
 for(;i>=0;i--)
 {printf("%d",c[i]);
 }printf("\n");}//这就是这样手动换行 
 return 0; 
 } 
