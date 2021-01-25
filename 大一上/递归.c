#include<stdio.h>
int sum(int p,int a,int k)
{   
	if (p==1)
	{
		return a;
	}
	else 
	{
		return (sum( p-1,a,k)+k);
	}
}
int main(void)
{   int n,a,k;
	scanf("%d%d%d",&n,&a,&k);
	int m;
	if(n>=2&&a>0&&k<=100&&k>0&&a<=100&&n<=100)
	{
	m=sum(n,a,k);
	printf("%d\n",m);
	}
	else 
	{
		printf("Wrong Number");
	}
	
}
