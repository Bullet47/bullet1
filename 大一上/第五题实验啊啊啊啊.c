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
   }         //转换完毕 
   n--;//得到n个字符(除去空字符） host读取完毕 接下来应通过sscanf分装 
 char *p;
 p=host_str;
 len=strlen(host_str);//空格和最后的空字符也算一个字符，但换行符不算 
 m=0;  //如何看他是否是一个空格内的 
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
   { sscanf(s[m].c,"%d",s[m].m);
   	m++;
   	w=0;
	   }	
 }
 m--;*///一共有七组数据 已经全部 
 
 //printf("%s",num);
 //printf("%d",m);
 //数字提取完毕，下面开始判断回文数
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
  
  /*if(host_str[0]=='\n')//实验空格和换行符均可识别； 
  {
  	printf("YES");
  }*/
  //printf("%s",host_str);
   return 0;
 } 
