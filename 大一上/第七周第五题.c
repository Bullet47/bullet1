#include<stdio.h>
#include<string.h>
int main(void)
{
	int w,n,i,m,f,r,j,k,temp;
	scanf("%d %d",&w,&n);
	int a[n+1],b[n+1],c[n+1];
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		c[i]=a[i];
	}
	if(w%2==0)
	{
		printf("ERROR");
	}
	else
	{
			m=(w+1)/2;//�ʼҪ���ĵ�һλ��
	f=n-w+1;//Ҫ��������
	r=(w-1)/2;//ÿ����ǰ��λ�� 
	 for(i=m;i<m+f;i++)
	    {
	      memcpy(b,c,sizeof(b));
	 	  for(j=i-r;j<=i+r;j++)
	 	  {
	 	    for(k=j+1;k<=i+r;k++)
			 {
			 	if(b[j]>b[k])
			 	{
			 	   temp=b[j];
			 	   b[j]=b[k];
			 	   b[k]=temp;		
				}
			 }
			 //printf("%d ",b[j]);	
		  }
		 // printf("\n");
		  a[i]=b[i];
		}
		for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);

	}
	}
return ;
}
