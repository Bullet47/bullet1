//�ж��ļ�������־ 
#include<stdio.h>
#include<string.h>
struct strs{
	char c[100];//name
    int  m[100];
             };
int main(void)
{   int n=0,len,i,m,k,j,w; //m��¼�ж���������,j�������Ǽ��� 
    k=0;
    w=0;
   struct strs s[100];
    char temp;
    char host_str[1000],num[100] ;
    memset(s[0].m,0,sizeof(s[0].m));
    char nm[100];
   for(;;)
   {
   	temp=getchar();
   	if(temp!=EOF)
   {  host_str[n]=temp;
      if(host_str[n]=='\n')
      {
      	host_str[n]=' ';
	  }
     n++;
   }
   else
   break;
   }
 //printf("%s",host_str);
 char *p;
 p=host_str;
 len=strlen(host_str);//�ո�����Ŀ��ַ�Ҳ��һ���ַ��������з����� 
 m=0;  //��ο����Ƿ���һ���ո��ڵ� 
 j=1;
 for(i=0;i<=len-1;i++)//   
 {  
 	if(p[i]>=48&&p[i]<=57)
 	{ 
 	  num[m]=p[i];  
	}
	else
	{
		num[m]=' ';
	}
	m++;
 }
p=num;
len=strlen(num);//������������һ�� ��ȥ����Ŀո�
m=0;
 for(i=0;i<=len-1;i++)
 {  
 	if(p[i]>=48&&p[i]<=57||(p[i]==' '&&p[i+1]!=' '&&p[0]!=' '))
 	{ 
 	  num[m]=num[i];	
 	  m++;	    
	 }
 }
 num[m]='\0';//�Ѿ���ȷ m=len(num)
 m=0;
 len=strlen(num);
 for(i=0;i<=len-1;i++)
 {  
   if(p[i]!=' ')
   {
   	s[m].c[w]=p[i];
   	w++;
   }
   if(p[i]==' ')
   { sscanf(s[m].c,"%d",s[m].m);//�����ո�Ͷ�һ�� 
   	m++;
   	w=0;
	   }	
 }//�����m�����ж���������

 //������ȡ��ϣ����濪ʼ�жϻ�����

  /*if(host_str[0]=='\n')//ʵ��ո�ͻ��з�����ʶ�� 
  {
  	printf("YES");
  }*/
   return 0;
 } 
