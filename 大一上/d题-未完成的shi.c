#include<stdio.h>//�����������һ���������Ƚ���һ���ڶ������ 
#include<stdlib.h> //���ֻ��0������أ� ��cnm�ĵ����� ������������һ���  ��ȫΪ0����ֻ��0���޳ɼ�������������� 
#include<string.h>//����������һ���޳ɼ���������ó����� 
struct student{
	char n[100];//name
	char i[100];//id
	char g[100];//grade
             };
int main(void)//��д���ֵ���� 
{int i,n,m,q,min2,max2,max1,min1;//m����Ϊû�гɼ����� 
 int k=0;//q��m������ 
 scanf("%d",&n);
 int g1[n+1],g2[n+1],g3[n+1];//g1�гɼ���g2�޳ɼ� 
 struct student s[101];
 for(i=0;i<=(n-1);i++){
 scanf("%s%s%s",&s[i].n,&s[i].i,&s[i].g);//��ȡ�ṹ���ÿһλ 
 if(strcmp(s[i].g,"n/a")!=0)//������0ʱ�����гɼ� 
 {g1[i]=atoi(s[i].g);//���� atoi����ת�� 
  g3[k]=atoi(s[i].g);
  k++;}
  else{g1[i]=-1;
  }
  }//forѭ����ֵ����              //�޳ɼ�������� 
q=k-1;
int max=-1,min=10000;
for(i=0;i<=(n-1);i++)
{ 
 {
 if (max<g1[i])
   max=g1[i]; }
  }              //�ҵ�����ֵ������Ѱ��������ֵ��Ӧ��������Զ�����һ����ĸ����¼���ֵ   
for(k=0;k<=q;k++) {
{
 if (min>g3[k])
   min=g3[k]; }
} 
int a[i],b[i],nminstd,nmaxstd,nmax,nmin;//ǰ�ߴ�������Щ�������ô��,���ߴ����ж�����������ֵ 
nminstd=nmaxstd=0;
for(i=0;i<=n;i++) 
{ if(max==g1[i])
  {a[i]=100;//��¼��Щ��������ֵ 
   nmax=i;
  nmaxstd++;}
 if(min==g1[i])
   {b[i]=100;//��¼��Щ�������Сֵ 
   nmin=i;
  nminstd++;}
}
if (nmaxstd==1&&nminstd==1)//�ж������ظ��� 
{ if (strcmp(s[nmax].g,s[nmin].g)!=0)
 {
 printf("%s %s %s\n",s[nmax].n,s[nmax].i);
 printf("%s %s %s",s[nmin].n,s[nmin].i);}
 else 
 printf("%s %s %s\n",s[nmax].n,s[nmax].i);
 }//���ظ���ʱ�������Ѿ���� 
else {

//��¼ASCII������С����  max1,min1
  max2=nmax;
  max2=nmin;
 for(i=0;a[i]!=100&&i<=n;i++){while(a[i]==i){max1=i;
 
 {if(strcmp(s[max1].n,s[nmax].n)<=0){//����������s1<sn�� ��ʱ��С��Ϊs1 ����max2=max1�������ʱ����С� 
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
