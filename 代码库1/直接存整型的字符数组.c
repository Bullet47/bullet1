#include<stdio.h>
int main(void)
{
	char a[]={0,1,2,3,4,97};
	int b=9870,c[200]={0},i=0;
	while(b>0)
	{
	c[i]=b%10;
		b/=10;
		i++;
	}
	i--;
	for(;i>=0;i--)
	{
		printf("%d    ",c[i]);
	}
	//printf("%d",a[5]);
	return 0;
}
