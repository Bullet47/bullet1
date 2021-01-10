#include<stdio.h>
#include<string.h>
int main(void) 
{   
    int n,i,m;//´ÎÊý 
	scanf("%d",&n);
	int a[100000000];
	char b[5*n+1];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	for(i=0;i<=n-1;i++)
	{
		scanf("%d%d%d",&a[3*i],&a[3*i+1],&a[3*i+2]); 
		if(a[3*i]*a[3*i]+a[3*i+1]*a[3*i+1]==a[3*i+2]*a[3*i+2]||a[3*i]*a[3*i]==a[3*i+1]*a[3*i+1]+a[3*i+2]*a[3*i+2]||a[3*i]*a[3*i]+a[3*i+2]*a[3*i+2]==a[3*i+1]*a[3*i+1])
		strcat (b,"Yes\n");
		else
		strcat (b,"No\n");
	}
	printf("%s",b);
	return 0;
	
}
