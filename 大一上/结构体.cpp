#include<stdio.h>
#include<stdlib.h> 
struct student 
  {
   char name;
   char id;
   int  grade;
   } ;
int main(void)
{ int n,i;//nλͬѧ ,iΪforѭ������ 
  printf("��Ҫ���뼸λͬѧ�ĳɼ�����Χ��1��100֮��\n") ;
  scanf("%d",&n);
  while (n<=0||n>100) 
 {
      printf("���������룬��Χ��1��100֮��\n");
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

