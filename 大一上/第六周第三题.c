#include<stdio.h>
#include<string.h>
int main(void)
{
	float n,i,sum,w,a,q;
	sum=0;
	q=0;//记录有几项为“n/a" 
	char temp[100];
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s",temp);
		if(strcmp(temp,"n/a")==0)
		{
			 q++;
			 memset
		   continue;
		
		}
		else
		{
			sscanf(temp,"%f",&w);
			sum+=w;
			memset(temp,0,sizeof(temp));
		}
		
	}
	n-=q;
	if(n==0)
	{
		printf("n/a");
	}
	else{
		a=sum/n;
	    printf("%.2f",a);
	}
	return 0;
 } 
