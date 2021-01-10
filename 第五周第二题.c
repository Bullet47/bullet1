#include<stdio.h>
int main(void)
{
	int n,i,x,j,k,m,len,y,lj;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int a[50]={0};
		y=0;
		m=0;
 		scanf("%d",&x);
	 for(j=2;j<=x+1;j++)
	 {
	 	if(y!=0)
	 	{
	 	  j=2;
		  y=0;	
		 }
	 	if(x%j==0)
			{
				a[m]=j;
				m++;
				x/=j;
				y++;
			}
	 }							
		
		for(k=0;k<m;k++)
		{
			if(k!=m-1)
			{
				printf("%d*",a[k]);
			}
			else 
			printf("%d\n",a[k]);
		}
	  
	}
	return 0;
 } 
