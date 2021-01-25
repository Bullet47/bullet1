#include<stdio.h>
int main(void)
{ long  unsigned int i,n,a[100],b[100];
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {scanf("%d%d",&a[i],&a[i+1]);
  b[i]=a[i]*a[i+1];
 }
 for(i=1;i<=n;i++)
 {
 printf("%ld\n",b[i]);}
 return 0; }

