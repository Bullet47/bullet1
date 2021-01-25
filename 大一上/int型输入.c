#include<stdio.h>
#include<string.h>
struct nm {
	int num[100];
	int len[1];
	int od[1];
};
int main(void)
{   
	int n,i,j,odd,even;
	char temp[50];tod[50];tev[50];
	scanf("%d",&n);
	 struct nm s[n];
	int a[2000],k;
   for(i=0;i<n;i++)
   {
   	memset(a,0,sizeof(a));
   	 odd=0;
   	 oven=0;
   	 for(j=0;;j++)
   	  {
   	  	
   	  	memset(temp,0,sizeof(temp));
   		scanf("%d",&a[j]);
   		if(a[j]%2!=0)
   		{  tod[odd]=a[j];
   			odd++;
		   }
		if(a[j]%2==0)
		{
		   tev[even]=a[j];
		   even++;
		}
   		scanf("%c",&temp[j]);
   		if(temp[j]=='\n') //每一列都可以读取 
   		break;
	  }
	  memset(s[i].num,0,sizeof(s[i].num));
	  s[i].len[0]=j+1;//总个数
	  s[i].od[0]=odd;//奇数个数 
	  memcpy(s[i].num,a,sizeof(a)+1);	
   }//数据读取完毕 
  for(i=0;i<n;i++)
  {
  	
  }
  return 0;
}
