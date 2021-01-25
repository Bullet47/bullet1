#include<stdio.h>
int main(void)
{
	int x,w,i;
	for(i=2;i<1000;i++)
	{
		for(w=2;w<i&&i%w!=0;w++)
		{
		}
		if(w==i)
		printf("%d\n",i);		
	}
return 0;
}
