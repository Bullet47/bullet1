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
   for(;;)
   {
   	temp=getchar();
   	if(temp!=EOF)
   {  host_str[n]=temp;
    if(host_str[n]=='\n'||host_str[n]==' ')
    {
    	host_str[n]=' ';
	}
     n++;
   }
   else
   break;
   }         //ת����� 
   n--;//�õ�n���ַ�(��ȥ���ַ��� host��ȡ��� ������Ӧͨ��sscanf��װ 
 char *p;
 p=host_str;
 len=strlen(host_str);//�ո�����Ŀ��ַ�Ҳ��һ���ַ��������з����� 
 m=0;  //��ο����Ƿ���һ���ո��ڵ� 
 j=1;
 printf("%d %d",len,n);
 /*for(i=0;i<=len-1;i++)//
 {
 	if(p[i]>=48&&p[i]<=57||p[i]==' '||p[i]=='\n')
 	{ 
 	  num[m]=p[i];	
 	  if(p[i]==' '||p[i]=='\n')
 	  { 
 	  	num[m]=' ';
	   }
 	  m++;	  
	 }
 }*/
/*p=num;
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
   { sscanf(s[m].c,"%d",s[m].m);
   	m++;
   	w=0;
	   }	
 }
 m--;*///һ������������ �Ѿ�ȫ�� 
 
 //printf("%s",num);
 //printf("%d",m);
 //������ȡ��ϣ����濪ʼ�жϻ�����
 /*for(j=1;j<=k;j++)
	{
		sscanf(" %s",num);
		sscanf(num," %d",s[j].m);
		sscanf(num,"%s",s[m].c);	
	} 
	printf("%s %s %s \n %d %d %d ",s[1].c,s[2].c,s[3].c,s[1].m[0],s[2].m[0],s[3].m[0]);*/
 
 //printf("%s\nk=%d",num,k);
//printf("%s %s\n",s[0].c,s[1].c);
//printf("%d %d",s[0].m[0],s[1].m[0]);
 //printf("%d",len);
  
  /*if(host_str[0]=='\n')//ʵ��ո�ͻ��з�����ʶ�� 
  {
  	printf("YES");
  }*/
  //printf("%s",host_str);
   return 0;
 } 
