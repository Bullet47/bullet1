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
    n=0;
   for(;;)
   {
   	temp=getchar();
   	if(temp!=EOF&&temp>=48&&temp<=57)
   {  host_str[n]=temp;
     n++;
   }
   else if(temp==EOF)
   break;
   }
   n--;
   printf("%s",host_str);
 /*//printf("%s",host_str);
 char *p;
 p=host_str;
 len=strlen(host_str);//�ո�����Ŀ��ַ�Ҳ��һ���ַ��������з����� 
 m=0;  //��ο����Ƿ���һ���ո��ڵ� 
 j=1;
 for(i=0;i<=len-1;i++)
 {
 	if(p[i]>=48&&p[i]<=57||p[i]==' '||p[i]=='\n')
 	{ 
 	  if(p[i]>=48&&p[i]<=57&&p[i+1]>=48&&p[i+1]<=57||p[i+1]==' '||p[i+1]=='\n')//����Ҳ�����ֻ�ո��� 
 	   num[m]=p[i];//������λ��������һ��Ҫ��ȡ 
	 else if ((p[i-1]<48||p[i-1]>57)&&p[i-1]!=' '||p[i-1]!='\n'&&p[i]>=48&&p[i]<=57&&(p[i+1]<48||p[i+1]>57)&&p[i+1]!=' '||p[i+1]!='\n')//ֻ��һλ������ 
	 { 
	 	continue;//ֻ��һλ���������򲻶� 
	 }
	 else if(p[i]>=48&&p[i]<=57&&p[i-1]>=48&&p[i-1]<=57||p[i+1]!=' '&&p[i+1]=='\n')
	 		
 	  if(p[i]==' '||p[i]=='\n')
 	  { 
 	  	num[m]=' ';
	   }
 	  m++;	  
	 }
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
   { sscanf(s[m].c," %d",s[m].m);
   	m++;
   	w=0;
	   }	
 }
 m--;//�����ж��������� 
//������ȡ��ϣ����濪ʼ�жϻ�����
for(i=0;i<=m-1)

 
 //printf("%s\nk=%d",num,k);
//printf("%s %s\n",s[0].c,s[1].c);
//printf("%d %d",s[0].m[0],s[1].m[0]);
 //printf("%d",len);
  
  /*if(host_str[0]=='\n')//ʵ��ո�ͻ��з�����ʶ�� 
  {
  	printf("YES");
  }*/
   return 0;
 } 
