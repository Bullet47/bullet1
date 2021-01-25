#include<stdio.h>
int main(void)
{
	float n,i,sum,w,a;
	w=sum=0;
	scanf("%f",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%f",&w);
		sum+=w;
	}
	a=sum/n;
	printf("%.2f",a);
	return 0;
 } 
