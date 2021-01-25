#include<stdio.h>
int main(void)
 
{ 
int i,sum,a[10]={1,2,3,4,5,6,7,8,9,10};
int * p;
p=a;
sum=0;
 for(i=0;i<10;i++) //p *p
 sum+=*(p+i);//p[i]=*(p+i)
printf("%d",sum);

 return 0;
 } 
