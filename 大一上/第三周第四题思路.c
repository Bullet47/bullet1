/*1.输入信息处理部分：用结构体数组来记录每一个信息 每个结构体分为整形数组(储存数字）和字符型字母数组 读取也从第一个开始读（不从0开始） 
用n次scanf读取所有字符串，再对每个读到的字符串再用n次循环通过sscanf分割进每个结构体的两个数组 若读取到的为空格，则读入加号 
2.输出方式 首先要找到数字中最大的正数和绝对值最大的负数 减号有2n个 
要用到分行列打印方式
for(k=最大的正数;k>=0;k--) 
{
	for(i=1;i<=n;i++)
{  
  编号为i的数组的第一个值是否>=maxz-i
  {
  	是 则打印编号为i数组的对应字母
	否 则打空格 
  }
  if(i==n)
  {回车到下一行最左边 
  }
 
 
}
 if(k==0)
  {
  for(m=1;m<=2*n;m++)
  {
  	printf("-");
  	if(m==2*n)
  	{
  		回车到下一行最左边 
	  }
  }
  } 
}
for(k=-1;k>=最大的负数;k--)
{
	
	for(i=1;i<=n;i++)
{  
  if(编号为i的数组的第一个值是否为负值且绝对值小于)>=abs(maxf-i)
  {
  	是 则打印编号为i数组的对应字母
	否 则打空格 
  }
  if(i==n)
  {回车到下一行最左边 
  }
  
}
}
正数部分整理完毕 负数类似 
找到负数中最大的负数 对其进行处理 */ 



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct num{
	char c[100];//字母&空格 
	int  mt[100];//数字
             };

int main(void)
{   
   struct num s[100];
    char str[100];//临时数组用来存储 每个空格前的数据 
	int n,m,k,i;//m用来计数 
	scanf("%d",&n);
	char str1[100]="+";
	for(m=1;m<=n;m++)
	{
		scanf("%s",str);
		sscanf(str,"%d",s[m].mt);
		sscanf(str,"%*d%s",s[m].c);
		
		if (s[m].c[0]=='\0')
		{
		sscanf(str1,"%s",s[m].c);
		}	
	}
	printf("\n");
	//printf("%d%s",s[1].mt[0],s[1].c);
	//可以成功读取数据，已测试  下面开始数据处理 首先找出最大的正数和最小负数 
	int max,min;//最大的正数和最小的负数  此模块为找到最大正数和最小负数!!是负数 
	max=-1,min=0; 
    for(m=1;m<=n;m++)
	{ 
	 if(s[m].mt[0]>max)
	 {
	 	max=s[m].mt[0];
	 }
	 if(s[m].mt[0]<0&&s[m].mt[0]<min)
	 {
	 	min=s[m].mt[0];
	 }		
	}
//	printf("%d %d",max,min);
for(k=max;k>=min;k--)//x轴上方 
{ if(k>=1)
{
for(i=1;i<=n;i++)
	{
		if(s[i].mt[0]>=k)
		{
			printf("%s ",s[i].c);
			if(i==n)
			{
				printf("\n");
			}
		}
		else if(s[i].mt[0]<k)
		{
			printf("  ");
			 if(i==n)
		{
			printf("\n");
		}
		}			
	 } 	
}
	else if(k==0)
  {
      for(m=1;m<=2*n-1;m++)
     {
        printf("-");
        if(m==2*n-1)
       {
  	    printf("\n");
       }
 
     }
  } 
  else if(k<0)
  {
  	for(i=1;i<=n;i++)
	{  
		if(s[i].mt[0]<0&&abs(s[i].mt[0])>=abs(k))
		{
			printf("%s ",s[i].c);
			if(i==n)
			{
				printf("\n");
			}
		}
		else if(s[i].mt[0]<0&&abs(s[i].mt[0])<abs(k))
		{
			printf("  ");
			 if(i==n)
		{
			printf("\n");
		}
		}
		else if(s[i].mt[0]>0)
		{
			printf("  ");
			}	
			 if(i==n)
		{
			printf("\n");
		}
	 } 		
	  }	
}
return 0;
}

