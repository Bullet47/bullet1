#include<stdio.h>
#include<string.h>
int main(void)
{   
	int n,i,j,odd,even,temp1,temp2,m;
	int tod[50],tev[50],tmp;     
	char temp[50];
	scanf("%d",&n);
	int a[2000];
   for(i=0;i<n;i++)
   {
   	memset(tod,0,sizeof(tod));       
   	memset(tev,0,sizeof(tev));
   	memset(a,0,sizeof(a));
   	 odd=0;
   	 even=0;
   	 for(j=0;;j++)
   	  {	
   	  	memset(temp,0,sizeof(temp));
   		scanf("%d",&a[j]);
   		if(a[j]%2!=0)
   		{  tod[odd]=a[j];
   			odd++;
		   }
		if(a[j]%2==0)
		{
		   tev[even]=a[j];
		   even++;
		}
   		scanf("%c",&temp[j]);
   		if(temp[j]=='\n') //每一列都可以读取 
   		break;
		
	  }
	  
	    tmp=0;
	    int k;
   	for(k=0;k<odd;k++)
   	{
   		for (m=k+1;m<odd;m++)
   		{
   			if(tod[k]>tod[m]){
   				tmp=tod[k];
   				tod[k]=tod[m];
   				tod[m]=tmp;
			   }
		   }
	   }
	   	for(k=0;k<even;k++)
   	{
   		for (m=k+1;m<even;m++)
   		{
   			if(tev[k]>tev[m]){
   				tmp=tev[k];
   				tev[k]=tev[m];
   				tev[m]=tmp;
			   }
		   }
	   }


   	  for(k=0;k<=odd-1;k++)
  {
  	printf("%d ",tod[k]);
  }
  for(k=0;k<=even-1;k++)
  {
  	printf("%d ",tev[k]);
  	if (k==even-1)
  	{
  		printf("\n");
	  }
  }
   }//数据读取完毕 
  return 0;
}
