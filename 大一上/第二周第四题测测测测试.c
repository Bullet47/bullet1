#include <stdio.h>
#include <stdlib.h>
#include<string.h> 
struct num{
	int line[100];//name
                                   //  然后输入我认为第一列的第一个数，再第二列的第一个数  之后换行 第一列的第二个数 
             };                 //那么怎样调换呢 比如 二和 列三换 那么就 先输入第三列的 再输入第二的 
int main(void)
{   int r,c,i,j,k,m;
  int x,y;
  char acmd[100],scmd[100];
  memset(scmd,0,sizeof(c));//清空初始化字符数组！！ 
  scanf("%d%d",&r,&c);
  int a[r+1][c+1]; 
  int f[r+1][c+1];//最终要打印出来的数组 
  memset(f,0,sizeof(f));
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
//两个地方改进 一 我并不是只每一次 而是要用一个数组记录，最后再打出来 
if(strcmp(scmd,"SR")==0)// SR x1 x2 交换x1行和x2行
{scanf("%d%d",&x,&y);
  	for (i = 0; i<r;i++)  
{  //分行列打印方式 
 if(i!=(x-1)&&i!=(y-1))
	 { 
	 for ( k=0;k<c;k++)
          { 
           f[i][k]=n[i].line[k];
    }  
    continue;
	 }
    else if(i==(x-1))
	{
	{ for (k=0;k<c;k++)
	  f[i][k]=n[y-1].line[k]; 
	 }
	 continue;}

	else if(i==(y-1))
	{for (k=0;k<c;k++)
	  f[i][k]=n[x-1].line[k]; 
		}
     continue;	
	}   
    } 
else if(strcmp(scmd,"SC")==0)
{scanf("%d%d",&x,&y);
	for (i= 0; i<r;i++)  
{ 
	    for ( k=0;k<c;k++)
          { if(k!=(x-1)&&k!=(y-1))
		    {
		    f[i][k]=n[i].line[k];
            continue;
			}
			else if(k==(x-1))
			{
			f[i][k]=n[i].line[y-1]; 
                continue;
			}
			else if(k==(y-1))
			{
				f[i][k]=n[i].line[x-1];
                continue;
			}			
	       }  
} 
}
else if(strcmp(scmd,"DR")==0)//删除x行 
{scanf("%d",&x);
for (i = 0; i<r;i++)  
{  //分行列打印方式 
 if(i<(x-1))
	 { 
	 for ( k=0;k<c;k++)
          { 
		    f[i][k]=n[i].line[k];
    }  
    continue;
	 }
  else 
  {
  	for (k=0;k<c;k++)
          { 
		   f[i][k]=n[i+1].line[k];
  }
  continue;
}
} 
r--;}
else if(strcmp(scmd,"DC")==0)
{scanf("%d",&x);
	
	for (i= 0; i<r;i++)  
{ 
	    for ( k=0;k<c;k++)
          { if(k<(x-1))
		    {
		    f[i][k]=n[i].line[k]; 
            continue;
			}
			else 
			{
				f[i][k]=n[i].line[k+1];
                continue;
			}			
	       }
    
} 
c--;
}
else if(strcmp(scmd,"IR")==0)//在x上面加一行 一行全为0； 
{  scanf("%d",&x);
  r++;
 	for (i = 0; i<r;i++)  
{  //分行列打印方式 
 if(i<(x-1))
	 { 
	 for ( k=0;k<c;k++)
          { 
           f[i][k]=n[i].line[k];
    }  
    continue;
	 }
    else if(i==(x-1))
	{
	{ for (k=0;k<c;k++)
	  f[i][k]=0; 
	 }
	 continue;}

	else if(i>(x-1))
	{for (k=0;k<c;k++)
	  f[i][k]=n[i-1].line[k]; 
		}
     continue;	
	}   
}
else if(strcmp(scmd,"IC")==0)
{ scanf("%d",&y);
   c++;
	for (i= 0; i<r;i++)  
{ 
	    for ( k=0;k<c;k++)
          { if(k<(y-1))
		    {
		    f[i][k]=n[i].line[k];
            continue;
			}
			else if(k==(y-1))
			{
			f[i][k]=0; 
            continue;
			}
			else if(k>(y-1))
			{
				f[i][k]=n[i].line[k-1];
                continue;
			}			
	       }  
} 
}
  
  	for (i=0;i<r;i++)    //分行列打印方式 
    {
        for (k=0;k<c;k++)
          {
		    printf("%d ",f[i][k]);
		    if(k==(c-1))  
		    printf("\n"); 
    }  
    }
    return 0; 
} 

