//奇偶排序 从小到大 奇数偶数原理 
#include<stdio.h>
#include<string.h>
 int main(void)
 {
 	int a[8]={3,3,3,4,5,6,7,8};
 	int i,j,min1,min2,n;
 	min1=100;
 	min2=100;
 	int b[8];
 	memset(b,0,sizeof(b));
 	for(i=0;i<=8-1;i++)
 	{
 		for(j=0;j<=8-1;j++)
 		{
 			if(i==0&&a[j]%2==1&&a[j]<=min1)
 			{   n=j;
 			    min1=a[j];
 				b[i]=min1;

			}
			if(i>0)
			{   
				if(j!=n&&a[j]%2==1&&a[j]>b[i-1]&&a[j]<=min2)
				{   n=j;
					min2=a[j];
					b[i]=min2;
				}
			}
			
			min2=100;		
		 }
	 }
	 for(i=4;i<=8-1;i++)
 	{
 		for(j=0;j<=8-1;j++)
 		{
 			if(i==4&&a[j]%2==0&&a[j]<min1)
 			{   n=j;
 				min1=a[j];
 				b[i]=min1;
			}
			if(i>4)
			{   
				if(n!=j&&a[j]%2==0&&a[j]>b[i-1]&&a[j]<min2)
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
