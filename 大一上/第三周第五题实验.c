#include<stdio.h>
#include<string.h>
struct strs{
	char c[100];//name
    int  m[100];
             };
int main(void)
{   int n=0,len,i,m,k,j,w; //m记录有多少组数据,j的作用是计数 
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
 len=strlen(host_str);//空格和最后的空字符也算一个字符，但换行符不算 
 m=0;  //如何看他是否是一个空格内的 
 j=1;
 for(i=0;i<=len-1;i++)
 {
 	if(p[i]>=48&&p[i]<=57||p[i]==' '||p[i]=='\n')
 	{ 
 	  if(p[i]>=48&&p[i]<=57&&p[i+1]>=48&&p[i+1]<=57||p[i+1]==' '||p[i+1]=='\n')//后面也是数字或空格换行 
 	   num[m]=p[i];//连续两位是数字则一定要读取 
	 else if ((p[i-1]<48||p[i-1]>57)&&p[i-1]!=' '||p[i-1]!='\n'&&p[i]>=48&&p[i]<=57&&(p[i+1]<48||p[i+1]>57)&&p[i+1]!=' '||p[i+1]!='\n')//只有一位是数字 
	 { 
	 	continue;//只有一位孤立数字则不读 
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
len=strlen(num);//下面再来处理一遍 消去多余的空格
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
 m--;//代表有多少组数据 
//数字提取完毕，下面开始判断回文数
for(i=0;i<=m-1)

 
 //printf("%s\nk=%d",num,k);
//printf("%s %s\n",s[0].c,s[1].c);
//printf("%d %d",s[0].m[0],s[1].m[0]);
 //printf("%d",len);
  
  /*if(host_str[0]=='\n')//实验空格和换行符均可识别； 
  {
  	printf("YES");
  }*/
   return 0;
 } 
