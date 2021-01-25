#include<stdio.h>//用lf读入double型变量 
#include<math.h>
int main(void)
{
	double n,m,a,i;
	scanf("%lf",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lf",&m);
		if(m<0)
		{
			printf("ERROR\n");
		}
		else
		{
			a=sqrt(m);
			printf("%.2lf\n",a);
		}
	}
	return 0;
}
