#include<stdio.h>
int main(void)
{  int sum,q; //(i�ж��ж೤) (k��j��n,q��Ϊ��������� 
 char str[101],*p,len,i,k,j,n;
 p=str;
 printf("����������Ҫ�����ַ���������������С��ʮ��");
 scanf("%d",&sum);
 while(sum>=10){printf("����������Ҫ�����ַ���������������С��ʮ��");
 scanf("%d",&sum);
 }
 for(q=1;q<=sum;q++){
 	scanf("%s",str);
for(i=1;p[i]!='\0';i++);//�ж��ַ������ж೤(lΪ������ַ������ȣ� 
if(i==3){
	if (p[0]=='S'&&p[1]=='C'&&p[2]=='U')
	printf("YES\n");
	else
	printf("NO\n"); 
	}//������պ�Ϊ����ʱ��ֱ���ж��Ƿ�ΪSCU
else 
{
for(k=0;k<100;k++)
if(p[k]=='S'&&p[k+1]=='C'&&p[k+2]=='U')//����ǰ100���ַ����ҵ�������������ĸ��SCU��ʱ��ֹͣ 
break;
for(j=k;p[j-1]=='A';j--);//��j=0����֤��Sǰ�����ĸ��ΪA
for(n=k+3;p[n]=='A';n++);//��n=l���ַ�����2�ȣ�����֤��Sǰ�����ĸ��ΪA
{if(j==0&&n==i)
printf("YES\n");
else 
printf("NO\n");}}
 }
 return 0;
 } 
