#include<stdio.h>
int main(void)
{
	int n,m,i,j,p,temp,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{  
	    p=-1;  
		scanf("%d",&m);
		int a[100]={0};
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
		if(m<=1)
		{
			printf("ERROR\n");
			continue;
		}
	 for(j=0;j<m;j++)
	 {
	 	for(k=0;k<m;k++)
	 	{
	 		if(a[j]<a[k])
	 		{
	 			temp=a[j];
	 			a[j]=a[k];
	 			a[k]=temp;
			 }
		 }
	 }
	 	 for(j=0;j<m;j++)
	 { 
	 	if(a[j]>a[0])
			{
		       p=j;
			   break;
			}
	 }
        if(p!=-1)
		printf("%d\n",a[p]);
		else
		printf("ERROR\n");

	}
	
	return 0;

	
}
