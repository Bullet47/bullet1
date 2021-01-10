//判断文件结束标志 
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
 len=strlen(host_str);//空格和最后的空字符也算一个字符，但换行符不算 
 m=0;  //如何看他是否是一个空格内的 
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
 num[m]='\0';//已经正确 m=len(num)
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
   { sscanf(s[m].c,"%d",s[m].m);//碰到空格就读一次 
   	m++;
   	w=0;
	   }	
 }//这里的m代表有多少组数据

 //数字提取完毕，下面开始判断回文数

  /*if(host_str[0]=='\n')//实验空格和换行符均可识别； 
  {
  	printf("YES");
  }*/
   return 0;
 } 
