#include<stdio.h>
#include<string.h>
int main(void)
{
	int a[100]={0},i,j,k,tm;
	char temp[100]={0};
	for(i=0;;i++)
	{   
	   scanf("%d",&a[i]);
	   scanf("%c",&temp[i]); 
	   if(temp[i]=='\n')
	   {
	   break;
       }   
	}
	printf("i=%d\n",i);
	for(j=0;j<=i;j++)
	{
		for(k=0;k<=i;k++)
		{
			if(a[j]>a[k])
			{
				tm=a[j];
				a[j]=a[k];
				a[k]=tm;
			}
		}
	
	}
	for(j=0;j<=i;j++)
	{
	  printf("%d ",a[j]);
	
	}
	return 0;
	
}
