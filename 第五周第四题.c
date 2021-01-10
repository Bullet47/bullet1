#include<stdio.h>
#include<string.h> 
struct o{
	char str[100];
	int n[100];
};
int main(void)
{   
    struct o s[100];
	char host[200],temp;
	int i,max,nmax;
	memset(host,0,sizeof(host));
		for(i=0; ;i++)
		{
			temp=getchar();
		if(temp!=EOF)
		{
		  if(temp>='A'&&temp<='Z')
		  {
		  	host[i]=temp+('a'-'A');//转换大小写 
		  	continue;
		  }
		  host[i]=temp;	
		}
		if(temp==EOF)
		{
		  break;
		}
	   }//成功输入 
   //开始分配 
   for(i=0;i<100;i++)
   {
   	memset(s[i].str,0,sizeof(s[i].str));
   	memset(s[i].n,0,sizeof(s[i].n));
   }
   int m,q,k;
    m=q=0;
   for(i=0;i<strlen(host);i++)
   {
   	if(host[i]>='a'&&host[i]<='z')
   	{
   	  s[m].str[q]=host[i];
   	  q++;
   	  if(host[i+1]<'a'||host[i+1]>'z')
   	  {
   	  	m++;
   	  	q=0;
		 }
	   }
   }//正确
   max=-1;
   for(i=0;i<m;i++)
   {
   	for(q=0;q<m;q++)
   	{
   		if (strcmp(s[i].str,s[q].str)==0)
   		{
   			s[i].n[0]++;
		}
	}
	for(k=0;k<m;k++)
	{
		if(s[k].n[0]>max&&strlen(s[k].str)>1||(s[k].n[0]==max&&strcmp(s[k].str,s[nmax].str)>0))
		{
			max=s[k].n[0];	
			nmax=k;
		}
	}	
	} 
    printf("%s %d",s[nmax].str,s[nmax].n[0]);
	return 0;
}
