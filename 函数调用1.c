#include<stdio.h>
#include<stdlib.h>
int average(int a,int b);
int main(void)
{
 int x,y,z;
   
   scanf("%d%d",&x,&y);
  z=average(x,y);
  printf("%d",z);
  return 0;
  
}
int average(int a,int b)
{return  (a+b)/2;
	}
