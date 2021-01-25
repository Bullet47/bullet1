#include<stdio.h>//分两种情况，一种是两个比较有一个于二的情况 
#include<stdlib.h> //如果只有0的情况呢？ 我cnm的第四题 他妈的特殊情况一大堆  把全为0或者只有0或无成绩的情况单独讨论 
#include<string.h>//可以先吸收一下无成绩的项？单独拿出来？ 
struct student{
	char n[100];//name
	char i[100];//id
	char g[100];//grade
             };
int main(void)//先写两种的情况 
{int i,n,m,q,min2,max2,max1,min1;//m代表为没有成绩的项 
 int k=0;//q记m的项数 
 scanf("%d",&n);
 int g1[n+1],g2[n+1],g3[n+1];//g1有成绩，g2无成绩 
 struct student s[101];
 for(i=0;i<=(n-1);i++){
 scanf("%s%s%s",&s[i].n,&s[i].i,&s[i].g);//读取结构体的每一位 
 if(strcmp(s[i].g,"n/a")!=0)//不等于0时代表有成绩 
 {g1[i]=atoi(s[i].g);//运用 atoi函数转换 
  g3[k]=atoi(s[i].g);
  k++;}
  else{g1[i]=-1;
  }
  }//for循环赋值结束              //无成绩不会输出 
q=k-1;
int max=-1,min=10000;
for(i=0;i<=(n-1);i++)
{ 
 {
 if (max<g1[i])
   max=g1[i]; }
  }              //找到最大和值，下面寻找这两个值对应多少项，可以定义另一个字母来记录这个值   
for(k=0;k<=q;k++) {
{
 if (min>g3[k])
   min=g3[k]; }
} 
int a[i],b[i],nminstd,nmaxstd,nmax,nmin;//前者代表若哪些项等于这么多,后者代表有多少项等于这个值 
nminstd=nmaxstd=0;
for(i=0;i<=n;i++) 
{ if(max==g1[i])
  {a[i]=100;//记录哪些项等于最大值 
   nmax=i;
  nmaxstd++;}
 if(min==g1[i])
   {b[i]=100;//记录哪些项等于最小值 
   nmin=i;
  nminstd++;}
}
if (nmaxstd==1&&nminstd==1)//判断有无重复项 
{ if (strcmp(s[nmax].g,s[nmin].g)!=0)
 {
 printf("%s %s %s\n",s[nmax].n,s[nmax].i);
 printf("%s %s %s",s[nmin].n,s[nmin].i);}
 else 
 printf("%s %s %s\n",s[nmax].n,s[nmax].i);
 }//无重复项时的排序已经完成 
else {

//记录ASCII最大或最小的项  max1,min1
  max2=nmax;
  max2=nmin;
 for(i=0;a[i]!=100&&i<=n;i++){while(a[i]==i){max1=i;
 
 {if(strcmp(s[max1].n,s[nmax].n)<=0){//若成立，则s1<sn， 此时最小项为s1 ，则max2=max1（保存此时的最小项） 
 max2=max1;
 nmax=max1;
 i++;}
 else if((s[max1].n,s[nmax].n)>0&&i!=0){max2=nmax;i++;
 }
 else if((s[max1].n,s[nmax].n)>0&&i!=0)max2=nmax;i++;
}
 } 
 }
 for(i=0;b[i]!=i&&i<=n;i++){
 while(b[i]==i){min1=i;
{if (strcmp(s[min1].n,s[nmin].n)>=0){
 min2=min1;
 nmin=min1;i++;}
 else if((s[min1].n,s[nmin].n)<0&&i!=0) {
 min2=nmin;i++;}
 else if((s[min1].n,s[nmin].n)>0&&i!=0) {
 min2=nmin;i++;}
 }
 } 
}
 printf("%d\n%d",max2,min2);}/* 
//printf("%s %s %s\n",s[max1].n,s[max1].i,s[min1].g); 
//printf("%s %s %s",s[min1].n,s[min1].i,s[min1].g);} //*//*}*/
 return 0;
}
