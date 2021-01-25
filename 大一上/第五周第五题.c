#include<stdio.h>

int main(void)
{
	int a,b,w,k,i,temp;
	i=0;
	int nm1[20]={0},nm2[20]={0},host[40]={0};
   	scanf("%d %d",&a,&b); 
   	
   	for(w=0;w<=1;w++)
   	{
   		if(w==0)
   		{
   				for(k=0;k<a;k++)
   			{
   					scanf("%d",&nm1[k]);
			}
		}
		if(w==1)
   		{
   			for(k=0;k<b;k++)
   			{
   				scanf("%d",&nm2[k]);
			}
		}
			
	}
	for(k=0,w=0;k<a+b;k++)
	{
			if(k<a)
		{
				host[k]=nm1[k];
		}
			if(k>=a)
		{
				host[k]=nm2[w];
				w++;
		}
	}//¿ªÊ¼ÅÅÐò
	for(w=0;w<a+b;w++)
	{
		for(k=w+1;k<a+b;k++)
		{
			if(host[w]>host[k])
			{
			  temp=host[w];
			  host[w]=host[k];
			  host[k]=temp;	
			} 
		}
	 } 
	for(w=0;w<a+b;w++)
	{
		printf("%d ",host[w]);
	}
  return 0;
 } 
