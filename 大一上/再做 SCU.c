//ÔÙ×öSCU
#include<stdio.h>
#include<string.h>
int main(void)
{
	int n,l,i,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{   
	    int j,r;
	    char str[100]={0};
		scanf("%s",str);
		l=strlen(str);
		j=100,r=100;
		if(l==3)
		{
		if(strcmp(str,"SCU")==0)
		  {
			printf("YES\n");
		  }
		  else
		  {
			printf("NO\n");
		  }
	    }
	    else if(l<3)
		  {
		    printf("NO\n");		
		  }
		else
		{
			for(k=0;k<l;k++)
			{
				if(str[k]=='S'&&str[k+1]=='C'&&str[k+2]=='U')
				{ 
                   if(k!=0)
					{
						for(j=k-1;j>0;j--)
					{
						if(str[j]!='A')
						{
							break;
						}		
					}
					}
				   if(k!=r)
					{
					  for(r=k+3;r<=l;r++)
					 {
					   if(str[r]!='A')
					   {  
					   	  break;
					   }
					 }	
					}
					
					break;
				}
			}
			if(j==0&&r==l) 
			printf("YES\n");
			else
		    printf("NO\n");
		}
	}
	return 0;	
}
 
