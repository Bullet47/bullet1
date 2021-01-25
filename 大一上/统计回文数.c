#include<stdio.h>
#include<string.h>
struct  M{
	char str[10];
	int nm;
	int hw;
        };
int main(void)
{
	struct M s[100];
	char temp,host[500]={0};
	int i,m,j,k;
	int nhw=0;
	while((temp=getchar())!=EOF)
	{
		host[i]=temp;
		i++;
	}
	j=0;
	k=0;
	memset(s[j].str,0,sizeof(s[j].str));
	s[j].nm=0;
	s[j].hw=0;
	for(m=0;m<strlen(host);m++)
	{
		if(host[m]>='0'&&host[m]<='9')
		{
			s[j].str[k]=host[m];
			k++;		
			if(host[m+1]<'0'||host[m+1]>'9')
			{
				j++;
				memset(s[j].str,0,sizeof(s[j].str));
				s[j].nm=0;
				s[j].hw=0;
				k=0;
			}
		}
	} //读取完毕
	j--;//实际上只有这么多个数组 
	int L,sum;
	sum=0;
	for(i=0;i<=j;i++)
	{ 
	  L=strlen(s[i].str);
		if(L>1)
		{
			if(L%2==1)//若是奇数 
		{
			for(k=0;k<(L-1)/2;k++)
			{
				if(s[i].str[k]==s[i].str[L-k])
				{
					sum++;
				}
				if(sum==k)
				{
					s[i].hw=1;
					nhw++;
				}
			}
		}
		else
		{
			
			for(k=0;k<L/2;k++)
			{
				if(s[i].str[k]==s[i].str[L-k])
				{
					sum++;
				}
				if(sum==k)
				{
				s[i].hw=1;
				nhw++;
				}
			}
		    
		}
		}
    }
    	for(i=0;i<=j;i++)
	{
		for(k=0;k<m;k++)
		{
			if(strcmp(s[i].str,s[k].str)==0&&s[i].hw==1&&s[i].hw==1)
			{
				s[i].nm++;
			}
		}
	}
	int max=-1;
	int nmax=0;
	for(i=0;i<=j;i++)
	{
		if(s[i].nm>max)
		{
			max=s[i].nm;
			nmax=i;
		}
	}
	int a[10];
	k=0;
   for(i=0;i<=j;i++)
   {
   	if(s[i].nm==max)
   	{
   		a[k]=i;
   		k++;
	}
   }
   //下面判断有多少种 
   /*for(j=0;j<k;j++)
   {
   	for(m=0;m<k;m++)
   	{
   		if(strcmp(s[a[j]].str,s[a[m]].str)<0)
   		{
   			a[j]=
        }
	   }
   }
	if(nhw==0)
	{
		printf("None");
	}
	else
	{
		printf("%s %d",s[nmax].str,s[nmax].nm);
	}
	printf(" %d",k);*/
	const n=j;
	for(i=0;i<=n;i++)
	{
		printf("%s  ",s[i].str);
	}
	return 0;
}
