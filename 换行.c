#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct num{
	char c[100];//��ĸ&�ո� 
	int  mt[100];//����
             };

int main(void)
{   
   struct num s[100];
    char str[100];//��ʱ���������洢 ÿ���ո�ǰ������ 
	int n,m,k,i;//m�������� 
	scanf("%d",&n);
	char str1[100]="+";
	for(m=1;m<=n;m++)
	{
		scanf("%s",str);
		sscanf(str,"%d",s[m].mt);
		sscanf(str,"%*d%s",s[m].c);
		
		if (s[m].c[0]=='\0')
		{
		sscanf(str1,"%s",s[m].c);
		}	
	}
	//printf("%d%s",s[1].mt[0],s[1].c);
	//���Գɹ���ȡ���ݣ��Ѳ���  ���濪ʼ���ݴ��� �����ҳ�������������С���� 
	int max,min;//������������С�ĸ���  ��ģ��Ϊ�ҵ������������С����!!�Ǹ��� 
	max=-1,min=0; 
    for(m=1;m<=n;m++)
	{ 
	 if(s[m].mt[0]>max)
	 {
	 	max=s[m].mt[0];
	 }
	 if(s[m].mt[0]<0&&s[m].mt[0]<min)
	 {
	 	min=s[m].mt[0];
	 }		
	}
//	printf("%d %d",max,min);
for(k=max;k>=min;k--)//x���Ϸ� 
{ if(k>=1)
{
for(i=1;i<=n;i++)
	{
		if(s[i].mt[0]>=k)
		{
			printf("%s ",s[i].c);
			if(i==n)
			{
				printf("\n");
			}
		}
		else if(s[i].mt[0]<k)
		{
			printf("  ");
			 if(i==n)
		{
			printf("\n");
		}
		}			
	 } 	
}
	else if(k==0)
  {
      for(m=1;m<=2*n-1;m++)
     {
        printf("-");
        if(m==2*n-1)
       {
  	    printf("\n");
       }
 
     }
  } 
  else if(k<0)
  {
  	for(i=1;i<=n;i++)
	{  
		if(s[i].mt[0]<0&&abs(s[i].mt[0])>=abs(k))
		{
			printf("%s ",s[i].c);
			if(k!=min&&i==n)
			{
				printf("\n");
			}
		}
		else if(s[i].mt[0]<0&&abs(s[i].mt[0])<abs(k))
		{
			printf("  ");
			 if(k!=min&&i==n)
		{
			printf("\n");
		}
		}
		else if(s[i].mt[0]>0)
		{
			printf("  ");
			 if(k!=min&&i==n)
		{
			printf("\n");
		}
			}	
			
	 } 		
	  }	
}
return 0;
}

