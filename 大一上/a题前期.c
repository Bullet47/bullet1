#include<stdio.h>
 long int fact(int n);
int main(void)
{
  long int x,sum;
 x=10;
 sum=fact(x);
 printf("sum=%d",sum);
 return 0;
}
long int fact(int n)
{
	if (n<=1)
	return 1;
	else
	return n*fact(n-1);
	

 /*if (n==1)
 return sum1;
 else
  return n*fact(n-1);*/
  
}
