#include<stdio.h>//�����������һ���������Ƚ���һ���ڶ������ 
#include<stdlib.h> //���ֻ��0������أ� ��cnm�ĵ����� ������������һ���  ��ȫΪ0����ֻ��0���޳ɼ�������������� 
#include<string.h>
struct student{
	char n[100];//name
	char i[100];//id
	char g[100];//grade
};
int main(void)//��д���ֵ���� 
{int i,n,m;//m����Ϊû�гɼ����� 
 scanf("%d",&n);
 int g1[n+1],g2[n+1];//g1�гɼ���g2�޳ɼ� 
 struct student s[101];
 for(i=0;i<=(n-1);i++){
 scanf("%s%s%s",&s[i].n,&s[i].i,&s[i].g);//��ȡ�ṹ���ÿһλ 
 if(strcmp(s[i].g,"n/a")!=0)//������0ʱ�����гɼ� 
 g1[i]=atoi(s[i].g);
 else
 {g2[i]=1;}//�޳ɼ������ʼ��Ϊ1 
 }//forѭ����ֵ���� 
//��ʼ����0����û�гɼ����ˣ��� ������˼��������ۣ� 
int max=-1,min=101;
for(i=0;i<=n;i++)
{ 
 {
 if (max<g1[i])
   max=g1[i]; }
{
 if(min>g1[i])
  min=g1[i];
}//�ҵ�������С��ֵ������Ѱ��������ֵ��Ӧ��������Զ�����һ����ĸ����¼���ֵ   
}
int a[i],b[i],nminstd,nmaxstd;//ǰ�ߴ�������Щ�������ô��,���ߴ����ж�����������ֵ 
nminstd=nmaxstd=0;
for(i=0;i<=n;i++) 
{ if(max=g1[i])
  {a[i]=i;//��¼��Щ��������ֵ 
  nmaxstd++;}
   else if(min=g1[i])
   {b[i]=i;//��¼��Щ�������Сֵ 
  nminstd++;}
}
printf("%s %s %s",s[nmaxstd].n,s[nmaxstd].i,s[nmaxstd].g); 
printf("%s %s %s",s[nminstd].n,s[nminstd].i,s[nminstd].g); 
 return 0;
}
