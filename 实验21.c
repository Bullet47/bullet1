// ������˼· ��ÿ�����������ַ������з�װ������һ����ʱ�������洢���ҵ����ĳ��ȣ�Ȼ�����У�һ����Ҫ����ż����
//fgets���� Ȼ���ÿ�����ݽ���������������������ַ����飬��ת�������Σ�������ö���һ���ṹ��
#include<stdio.h>
#include<string.h>
struct number{
 char cline[50];
 int iline[50];
 int fline[50];
 char f[50];//
};
 int main(void)
 { 
   char temp[50];
   char *p;
   struct number s[100];
  int n,i,len,k,m,j,min1,min2;//n������,m���������еĵڼ�����,����ֵ�����м�����
  min1=100,min2=100;
  int odd=0;//���� 
  scanf("%d",&n);
  getchar();
   for(i=1;i<=n;i++)
   { m=0;
   	 memset(s[i].cline,0,sizeof(s[i].cline));
   	 memset(s[i].iline,0,sizeof(s[i].iline));
   	 memset(s[i].fline,0,sizeof(s[i].fline));
   	  memset(temp,0,sizeof(s[i].fline));
   	 fgets(s[i].cline,50,stdin);
   	 strcpy(temp,s[i].cline);
   	 p=s[i].cline;
   	 len=strlen(s[i].cline);
   	  for(k=0;k<=len-2;k++)
   	  {
   	  	if(p[k]!=' ')
   	  	{
   	  		s[i].iline[m]=p[k]-48;
   	  		if(s[i].iline[m]%2==1)
   	  		{
   	  			odd++;
				 }
		    m++; 
		}
	  }
 for(k=0;k<=odd;k++)
 	{
 		for(j=0;j<=m-1;j++)
 		{
 			if(k==0&&s[i].iline[j]%2==1&&s[i].iline[j]<min1)
 			{
 				min1=s[i].iline[j];
 				s[i].fline[k]=min1;
			}
			if(k>0)
			{   
				if(s[i].iline[j]%2==1&&s[i].iline[j]>s[i].fline[k-1]&&s[i].iline[j]<min2)
				{
					min2=s[i].iline[j];
					s[i].fline[k]=min2;
				}
			}
			
			min2=100;		
		 }
	 }
	 for(k=odd;k<=m-1;k++)
 	{
 		for(j=0;j<=m-1;j++)
 		{
 			if(k==odd&&s[i].iline[j]%2==0&&s[i].iline[j]<min1)
 			{
 				min1=s[i].iline[j];
 				s[i].fline[k]=min1;
			}
			if(k>odd)
			{   
				if(s[i].iline[j]%2==0&&s[i].iline[j]>s[i].fline[k-1]&&s[i].iline[j]<min2)
				{
					min2=s[i].iline[j];
					s[i].fline[k]=min2;
				}
			}
			
			min2=100;		
		 }
	 }//���濪ʼ����ֵ 
	    	  for(k=0;k<=m-1;k++)
	    	
   	  {
   	  	p=temp;
   	  	if(p[k]!=' ')
   	  	{  
   	 	p[k]=s[i].fline[k]+48;
		}
	  }
    } 
for(i=1;i<=n;i++)
{
	printf("%s\n",s[i].cline);
	   }       
   //����˳��֮���ٷ���ֵ���ַ����飬����˳�򸳻�ȥ����������ٸ�������д��forѭ��printf 
   //printf("%d %d %d %d ",s[1].iline[0],s[1].iline[1],s[1].iline[2],s[1].iline[3]); ��ȷ 
   return 0;
  
 	
 }
   
