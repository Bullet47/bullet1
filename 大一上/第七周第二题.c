#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,q,w,j,sum,k,a[1000];;
	char temp[100],c;
	memset(a,0,sizeof(a));
	memset(temp,0,sizeof(temp));
	q=0;
	sum=0;
	k=0; 
	for(;;)
	{
		scanf("%d",&a[i]);
	    scanf("%c",&temp[i]);
	if(temp[i]=='\n')
	{   
		for(w=1;w<=i;w++)
		{   
		  if(a[w]!=a[0])
                    {
					sum++;
					 } 		    	   
		}
			printf("%d",sum);
	        break;
	       
		}
		else 
		{
			i++;
		}
	}
	
	return 0;
}
