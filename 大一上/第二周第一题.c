#include<stdio.h>
#include<string.h>
int main(void)
{ int n,i,j;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  char a[5000] ,b[5000];
  int la,lb;
  int i,j;
  int a1[5000],b1[5000];//ǰ��a*b,����b*a 
  scanf("%s%s",a,b);//��ȡ��������
  la=strlen(a);
  lb=strlen(b);//��ȡ�������ж೤ 
  int c[la+lb];
  memset(c,0,sizeof(c));//�����ʼ�� Ҫ��Ȼ���� �ǽ���������0 ȫ����ɿ��ַ� ������û�ж��� memset������һ����ʼ�� 
  for(i=0;i<=la-1;i++)
  { a1[la-i-1]=a[i]-48; 
   } 
   for(i=0;i<=lb-1;i++)
  { b1[lb-i-1]=b[i]-48; //��ʵֵ����char�ͼ�48!!!
   } //�Դ�������з��� 
    for(i=0;i<=la-1;i++)
     {
       for(j=0;j<=lb-1;j++)
       {
       	c[i+j]+=a1[i]*b1[j];
	   }
	 }
 for(i=0;i<=(la+lb-1);i++)
 {if (c[i]>10)
	{
		c[i+1]+=c[i]/10;//��Ϊ��int�ͣ����Ի����С����//������������ ��ֱ��ʡ�� ��ֻ�ܸ�λ��� ����ʮʱ��λ 
		c[i]%=10; 
	}
 }
 i=la+lb-1;
 if(c[la+lb-1]==0)//û�����Ϊʲô����Ҫ�ó���д���ǶԵ� 
 i--;
 for(;i>=0;i--)
 {printf("%d",c[i]);
 }printf("\n");}//����������ֶ����� 
 return 0; 
 } 
