#include<stdio.h>
int main(void)
{
	int a[10],i,n,j;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
   
   for(n=1;n<10;n++)//�ӵڶ��ʼ��ӡ��������0�����ӡһ����Ȼ���ջ� 
   {
   	 if(a[n]!=0)
   	 {
   	 	printf("%d",n);
   	 	a[n]--;
   	 	break;
		}
   }
	for(n=0;n<10;n++)
	{
		for(j=1;j<=a[n];j++)
		{
			printf("%d",n);
		}
	}
	return 0;
}
	

