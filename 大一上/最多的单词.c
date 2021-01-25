#include<stdio.h>
#include<string.h>
struct M{
	
	char str[50];
	int nm;
};
int main(void)
{   
    int i=0;
	struct M s[50];
	char temp,host[100]={0};
	while((temp=getchar())!=EOF)
	{
		host[i]=temp;
		if(host[i]>='A'&&host[i]<='Z')
		 {
		 	host[i]=host[i]+'a'-'A';
		 }
		 i++;
	}
	int j,k,l,m,n;
	m=n=0;
	memset(s[m].str,0,sizeof(s[m].str));
	s[m].nm=0;
	for(i=0;i<strlen(host);i++)
	{  
	   if(host[i]>='a'&&host[i]<='z')
		
		{
		s[m].str[n]=host[i];
		n++;
		if(host[i+1]>'z'||host[i+1]<'a')
		{
		  m++;
		  memset(s[m].str,0,sizeof(s[m].str));
		  s[m].nm=0;
		  n=0;
		}	
		}
	}
	for(i=0;i<m;i++)
	{
		for(k=0;k<m;k++)
		{
			if(strcmp(s[i].str,s[k].str)==0)
			{
				s[i].nm++;
			}
		}
	}
	int max=-1;
	int nmax=0;
	for(i=0;i<m;i++)
	{
		if(s[i].nm>max||(s[i].nm==s[nmax].nm&&strcmp(s[i].str,s[nmax].str)>0))
		{
			max=s[i].nm;
			nmax=i;
		}
	}
	printf("%s %d",s[nmax].str,s[nmax].nm);
	return 0;
}
