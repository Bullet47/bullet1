#include<stdio.h>
#include<string.h>
struct n{
 char str[20];
 char temp[50];
};
int main(void)
{   
    int i,len,j,k,m,h;
    h=0;
	char *p,tstr[50];
	struct n s[50];
	for(i=0;;i++)
	{   
	    k=0;
	    memset(s[i].str,0,sizeof(s[i].str));
	    memset(tstr,0,sizeof(tstr));
	    memset(s[i].temp,0,sizeof(s[i].temp));
		scanf("%s",s[i].str);
		len=strlen(s[i].str); 
		for(j=0;j<=len-1;j++)
		{  
			p=s[i].str;
			if((p[j]>='A'&&p[j]<='Z')||(p[j]>='a'&&p[j]<='z'))
			{
				k++;
			}
		}
		if(k!=1)
		{
		   strcpy(tstr,s[i].str);
		   for(m=0;m<=k-1;m++)
		   {
		   	s[i].str[m]=tstr[k-m-1];
		   }
		   	
		}
		scanf("%c",&s[i].temp[i]);
		if(s[i].temp[i]!='\n');
		{  if(s[i].temp[i]==' ')
		{
			h++;
		}
		     strcat(s[i].str,s[i].temp);
		}
		if(s[i].temp[i]=='\n')
		{
			break;
		}
		
	}
	printf("%d %d\n",i,h);
	for(j=0;j<=i;j++)
	{   
	 
			printf("%s",s[j].str);
	}
	return 0;
	
}
