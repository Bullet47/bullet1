#include<stdio.h>
#include<stdlib.h> 
struct student 
  {
   char name;
   char id;
   int  grade;
   } ;
int main(void)
{ int n,i;//n位同学 ,i为for循环计数 
  printf("你要输入几位同学的成绩？范围在1到100之间\n") ;
  scanf("%d",&n);
  while (n<=0||n>100) 
 {
      printf("请重新输入，范围在1到100之间\n");
      scanf("%d",&n);
 }

} 
printf("%s%s%d",s[i].name,s[i].id,s[i].grade); 
return 0;
    
}
void input(struct student stu[])
{
}
 for(i=0;i<n;i++){
 	gets(s[i].name);
 	gets(s[i].id);
 	gets(s[i].grade);
 //scanf("%s%s%d",&s[i].name,&s[i].id,&s[i].grade);
} 
printf("%s%s%d",s[i].name,s[i].id,s[i].grade); 

