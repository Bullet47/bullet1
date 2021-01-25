#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	int n,max,i,m;
	max=-1;
	scanf("%d",&n);
   long	int a[n+1];
   long	int b[n+1];
  memset(a,0,sizeof(a));
  memset(b,0,sizeof(b));
  memcpy(b,a,sizeof(b));
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]); 
		b[i]=abs(a[i]);
		
	}
	for(i=0;i<=n-1;i++)
	{ if(b[i]>max)
	{  max=b[i];
	  m=i;
	}
	  else 
	  continue;
	} 
	printf("%d",a[m]);
	
	return 0;
 } 
