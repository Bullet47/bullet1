#include <stdio.h>
#include <stdlib.h>
#include<string.h> 
struct num{
	int line[100];//name
	int i[100];//id
	char g[100];//grade
             };
int main(void)
{   int r,c,i,j,k,m;
  int q[1000],w[1000];
  memset(q,0,sizeof(q));
  memset(w,0,sizeof(w));
  char acmd[100],scmd[100];
  memset(scmd,0,sizeof(c));//清空初始化字符数组！！ 
  scanf("%d%d",&r,&c);
  int a[r+1][c+1];
  getchar();
   for (i=0;i<r;i++)//从第0行开始 
    {
        for (k = 0;k < c;k++)//从第0列开始 
            scanf("%d", &a[i][k]);//二维数组嵌套输入初始方式  就整形初始化 字符型不好初始 
    }
    getchar();
    for(i=0;i<=1;i++)
  {
  scanf("%c",&scmd[i]);}
  struct num n[100];
  //来分别记录每一行数据 i代表每一行 
  for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 n[i].line[k]=a[i][k];
   } 
  } 
  /*for (i = 0; i<r;i++){
  	for (i = 0; i<r;i++)    //分行列打印方式 
    {
        for ( k=0;k<c;k++)
          {
		    printf("%d ",n[i].line[k]);
		    if(k==(c-1))  
		    printf("\n"); 
    }  
    }
  }*/

  int x,y;
 scanf("%d%d",&x,&y);
if(strcmp(scmd,"SR")==0)// SR x1 x2 交换x1行和x2行
{ memcpy(q,n[x-1].line,sizeof(n[x-1].line));
  memcpy(w,n[y-1].line,sizeof(n[y-1].line));//这一步没有问题 已经验证 
  	for (i = 0; i<r;i++)  
{  //分行列打印方式 
     if(i==(x-1)){ 
	  for(m=0;m<c;m++)
     {printf("%d X",q[m]);
     if(m==(c-1))  
	printf("\n"); 
	 }
	 continue;}

	else if(i==(y-1))
	{
		for(m=0;m<c;m++)
		{printf("%d Y",w[m]);
     if(m==(c-1))  
		    printf("\n");
		}
     continue;
	
	}
	 else
	 { for ( k=0;k<c;k++)
          { 
		    printf("%d Z",n[i].line[k]);
		    if(k==(c-1))  
		    printf("\n"); 
    }  
    continue;
	 }
        
    }

    
}
  

/*else if(strcmp(scmd,"SC")==0)
printf("2");
else if(strcmp(scmd,"DR")==0)
printf("3");
else if(strcmp(scmd,"DC")==0)
printf("4");
else if(strcmp(scmd,"IR")==0)
printf("5");
else if(strcmp(scmd,"IC")==0)
printf("6");*/
    
 /*for (i = 0; i<r;i++)    //分行列打印方式 
    {
        for ( k=0;k<c;k++)
          {
		    printf("%d ",a[i][k]);
		   if(k==(c-1))  
		   printf("\n"); }  
    }*/ 
 
    return 0;
} 

