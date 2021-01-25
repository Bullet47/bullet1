#include<stdio.h>
#include<string.h> 
int main(void)
{ 
 char str1[1000],str2[1000],len,M,*p,*q,*w,str3[1000],k;
  scanf("%d",&M);
  //getchar();//ÎüÊÕ»Ø³µ 
  fgets(str1,201,stdin); 
  len=strlen(str1);
  strcpy(str2,str1);
  int i=0;
  p=str1;
  q=str2;
  w=str3;
  {
  if(M==len-1)
  k=0;
  else if(M>len-1)
  k=(M%(len-1));
  else if(M<len-1)
  k=M;
  }
  for(;i<len-1;i++)
  {if(i-k<0)
w[i]=q[i+len-k-1];
   else
w[i]=p[i-k];
   }
  printf("%s",str3);
  return 0;
 } 
 
