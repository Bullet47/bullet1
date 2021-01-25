//调用函数后记得清零 
#include<stdio.h>
#include<string.h>
int main(void)
{ int n,i,len,k,m;
  m=0;
  scanf("%d",&n);
  char a[1000],*p;
  for(i=1;i<=n;i++)
  {scanf("%s",a);
   p=a;
   len=strlen(a);
   if(len%2==0)
  {for(k=0;k<(len/2);k++)
   {if(p[k]==p[len-1-k])
    m++;
   }
   if(m==(len/2))
   printf("Yes\n");
   else 
   printf("No\n");
   }
   else
   {for(k=0;k<((len-1)/2);k++)
    {if(p[k]==p[len-1-k])
     m++;
	}
	if(m==((len-1)/2))
	printf("Yes\n");
    else 
    printf("No\n");
	}
	m=0;
   }
  //printf("%d\n%d",len,m);
  return 0;
  
}
