#include<stdio.h>
#include<string.h> 
int main(void)
{int n,i,k;//n��ͬѧ,i��str���鳤��,k�������±�
 k=0;
 i=0; 
 char name[1001],id[1801],g[10000],*p,*m;//���֡����֤���ɼ�����/*
 char str[1000];//��˵ 
 char enter[100];//���ջس�������ֹ��gets�������Ӱ�� 
 printf("��Ҫ���뼸λͬѧ�ĳɼ�����Χ��1��100֮��\n") ;
 scanf("%d",&n);
while (n<0||n>100) 
{
printf("���������룬��Χ��1��100֮��\n");
scanf("%d",&n);
}
gets(enter) ;
printf("����������ѧ����English name��ѧ�ţ��ɼ�(���ȱ��������n/a(����֮���ÿո����)\n") ; 
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
