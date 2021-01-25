#include<stdio.h>//分两种情况，一种是两个比较有一个于二的情况 
#include<stdlib.h> //如果只有0的情况呢？ 我cnm的第四题 他妈的特殊情况一大堆  把全为0或者只有0或无成绩的情况单独讨论 
#include<string.h>
struct student{
	char n[100];//name
	char i[100];//id
	char g[100];//grade
};
int main(void)//先写两种的情况 
{int i,n,m;//m代表为没有成绩的项 
 scanf("%d",&n);
 int g1[n+1],g2[n+1];//g1有成绩，g2无成绩 
 struct student s[101];
 for(i=0;i<=(n-1);i++){
 scanf("%s%s%s",&s[i].n,&s[i].i,&s[i].g);//读取结构体的每一位 
 if(strcmp(s[i].g,"n/a")!=0)//不等于0时代表有成绩 
 g1[i]=atoi(s[i].g);
 else
 {g2[i]=1;}//无成绩的项都初始化为1 
 }//for循环赋值结束 
//开始排序0分与没有成绩的人！！ （还在思考如何讨论） 
int max=-1,min=101;
for(i=0;i<=n;i++)
{ 
 {
 if (max<g1[i])
   max=g1[i]; }
{
 if(min>g1[i])
  min=g1[i];
}//找到最大和最小的值，下面寻找这两个值对应多少项，可以定义另一个字母来记录这个值   
}
int a[i],b[i],nminstd,nmaxstd;//前者代表若哪些项等于这么多,后者代表有多少项等于这个值 
nminstd=nmaxstd=0;
for(i=0;i<=n;i++) 
{ if(max=g1[i])
  {a[i]=i;//记录哪些项等于最大值 
  nmaxstd++;}
   else if(min=g1[i])
   {b[i]=i;//记录哪些项等于最小值 
  nminstd++;}
}
printf("%s %s %s",s[nmaxstd].n,s[nmaxstd].i,s[nmaxstd].g); 
printf("%s %s %s",s[nminstd].n,s[nminstd].i,s[nminstd].g); 
 return 0;
}
