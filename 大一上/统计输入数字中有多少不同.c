#include<stdio.h>
#include<string.h>
int main(void)
{
	int a[1000],i,q,w,j,sum,k;
	char temp[100];
	memset(a,0,sizeof(a));
	memset(temp,0,sizeof(temp));
	q=0;
	sum=0;
	k=0;
	for(i=0;;i++)
	{
		scanf("%d",&a[i]);
		scanf("%c",&temp[i]);
		if(temp[i]=='\n')
		{   
		    for(w=0;w<=i;w++)
		    {   
		    	for(k=0,j=0;j<w;j++)
		    	{
		    	   if(a[j]!=a[w])
		    	   {
		    	   	k++;
				   }
			    }
			    if(k==j)
			    {
			    	sum++;
				}
		    	   
			}
			printf("%d",sum);
			sum=0;
			memset(a,0,sizeof(a));
	        memset(temp,0,sizeof(temp));
	        i=0;
	       printf("\n");
		}
	}
	return 0;
}
