//排序 从小到大 从大到小原理类似 
#include<stdio.h>
#include<string.h>
 int main(void)
 {
 	int a[8]={9,8,7,6,5,4,3,2};
 	int i,j,min1,min2;
 	min1=100;
 	min2=100;
 	int b[8];
 	memset(b,0,sizeof(b));
 	for(i=0;i<=8-1;i++)
 	{
 		for(j=0;j<=8-1;j++)
 		{
 			if(i==0&&a[j]<min1)
 			{
 				min1=a[j];
 				b[i]=min1;
			}
			if(i>0)
			{   
				if(a[j]>b[i-1]&&a[j]<min2)
				{
					min2=a[j];
					b[i]=min2;
				}
			}
			min2=100;
		 }
	 }
	 for(i=0;i<=7;i++)
	 {
	 	printf("%d ",b[i]);
	 }
	 return 0;
 }
