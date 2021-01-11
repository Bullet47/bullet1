#include<stdio.h>
#include<string.h> 
int main(void)
{int n,i,k;//n名同学,i是str数组长度,k是数组下标
 k=0;
 i=0; 
 char name[1001],id[1801],g[10000],*p,*m;//名字、身份证、成绩数组/*
 char str[1000];//再说 
 char enter[100];//吸收回车键，防止对gets函数造成影响 
 printf("你要输入几位同学的成绩？范围在1到100之间\n") ;
 scanf("%d",&n);
while (n<0||n>100) 
{
printf("请重新输入，范围在1到100之间\n");
scanf("%d",&n);
}
gets(enter) ;
printf("请依次输入学生的English name，学号，成绩(如果缺考请输入n/a(三者之间用空格隔开)\n") ; 
gets(str);
for(i=k;str[i]!=' ';i++,k++){
	name[k]=str[k];}
//for(;str[i]!=' ';i++,k++){
	//id[k]=str[k];}
//for(i=k+1;str[i]!=' ';i++,k++){
	//g[k]=str[k];}
printf("%s\n",name);
//printf("%s\n",id);
//printf("%s",g);
/**/
printf("%d\n%d",i,k);

return 0;


 
  

 } 
