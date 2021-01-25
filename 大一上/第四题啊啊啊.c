#include <stdio.h>
#include <stdlib.h>
#include<string.h> 

                                   //  然后输入我认为第一列的第一个数，再第二列的第一个数  之后换行 第一列的第二个数 
                //那么怎样调换呢 比如 二和 列三换 那么就 先输入第三列的 再输入第二的 
int main(void)
{   int r,c,i,j,k,m,l,t,z;
  int x,y;
  char scmd[100]; 
  scanf("%d%d",&r,&c);
  int a[r][c]; 
  int f[r][c];//最终要打印出来的数组 
  memset(f,0,sizeof(f));
  memset(a,0,sizeof(a));
  memset(scmd,0,sizeof(scmd));
   getchar();
   for (i=0;i<r;i++)//从第0行开始 
    {
        for (k = 0;k < c;k++)//从第0列开始 
         scanf("%d", &f[i][k]);//二维数组嵌套输入初始方式  就整形初始化 字符型不好初始 
    }
    getchar();
  //来分别记录每一行数据 i代表每一行 
//两个地方改进 一 我并不是只每一次 而是要用一个数组记录，最后再打出来 
scanf("%d",&t); 
for(l=1;l<=t;l++)
{  
	scanf("%s",scmd);
if(strcmp(scmd,"SR")==0)// SR x1 x2 交换x1行和x2行
{ for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 a[i][k]=f[i][k];
   } 
  }
 scanf("%d%d",&x,&y);
  	for (i=0;i<r;i++)  
{  //分行列打印方式 
 if(i!=(x-1)&&i!=(y-1))
	 { 
	 for ( k=0;k<c;k++)
          { 
           f[i][k]=a[i][k];
    }  
    continue;
	 }
    else if(i==(x-1))
	{
	{ for (k=0;k<c;k++)
	  f[i][k]=a[y-1][k]; 
	 }
	 continue;}

	else if(i==(y-1))
	{for (k=0;k<c;k++)
	  f[i][k]=a[x-1][k]; 
		}
     continue;	
	} 
	  //memset(a,0,sizeof(a));
    } 
else if(strcmp(scmd,"SC")==0)
{  
   for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 a[i][k]=f[i][k];
   } 
  }
 scanf("%d%d",&x,&y);
	for (i= 0; i<r;i++)  
{ 
	    for ( k=0;k<c;k++)
          { if(k!=(x-1)&&k!=(y-1))
		    {
		    f[i][k]=a[i][k];
            continue;
			}
			else if(k==(x-1))
			{
			f[i][k]=a[i][y-1]; 
                continue;
			}
			else if(k==(y-1))
			{
				f[i][k]=a[i][x-1];
                continue;
			}			
	       }  
} 
memset(a,0,sizeof(a));
}
else if(strcmp(scmd,"DR")==0)//删除x行 
{ 
  for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 a[i][k]=f[i][k];
   } 
  }
 scanf("%d",&x);
for (i = 0; i<r;i++)  
{  //分行列打印方式 
 if(i<(x-1))
	 { 
	 for ( k=0;k<c;k++)
          { 
		    f[i][k]=a[i][k];
    }  
    continue;
	 }
  else 
  {
  	for (k=0;k<c;k++)
          { 
		   f[i][k]=a[i+1][k];
  }
  continue;
}
} 
memset(a,0,sizeof(a));
r--;}
else if(strcmp(scmd,"DC")==0)
{
	for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 a[i][k]=f[i][k];
   } 
  }
 scanf("%d",&x);
	
	for (i= 0; i<r;i++)  
{ 
	    for ( k=0;k<c;k++)
          { if(i<(x-1))
		    {
		    f[i][k]=a[i][k]; 
            continue;
			}
			else 
			{
				f[i][k]=a[i][k+1];
                continue;
			}			
	       }
    
} 
c--;
memset(a,0,sizeof(a));
}
else if(strcmp(scmd,"IR")==0)//在x上面加一行 一行全为0； 
{  r++;
 for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 a[i][k]=f[i][k];
   } 
  }
 scanf("%d",&x);
 z=x-1;
 	for (i = 0; i<r;i++)  
{  //分行列打印方式 
 if(i<z)
	 { 
	 for ( k=0;k<c;k++)
          { 
           f[i][k]=a[i][k];
    }  
    continue;
	 }
    else if(i==z)
	{
	{ for (k=0;k<c;k++)
	  f[i][k]=0; 
	 }
	 continue;}

	else if(i>z)
	{for (k=0;k<c;k++)
	  f[i][k]=a[i-1][k]; 
		}
     continue;	
	}   
	//memset(a,0,sizeof(a));
}
else if(strcmp(scmd,"IC")==0)
{  
 memset(a,0,sizeof(a));
  for (i=0;i<r;i++) 
  {
   for (k=0;k<c;k++)
   {
   	 a[i][k]=f[i][k];
   } 
  }
  c++; 
 scanf("%d",&x);
	for (i= 0; i<r;i++)  
{   
	   for ( k=0;k<c;k++)
          { if(k<(x-1))
		    {
		    f[i][k]=a[i][k];
            continue;
			}
			else if(k==(x-1))
			{
			f[i][k]=0; 
            continue;
			}
			else if(k>(x-1))
			{
				f[i][k]=a[i][k-1];
                continue; 
			}			
	       }  
} 

}
}
  
  	/*for (i=0;i<r;i++)    //分行列打印方式 
    {
        for (k=0;k<c;k++)
          {
		    printf("%d ",f[i][k]);
		    if(k==(c-1))  
		    printf("\n"); 
    }  
    }*/
    
  	for (i=0;i<r;i++)    //分行列打印方式 
    {
        for (k=0;k<c;k++)
          {
		    printf("%d ",a[i][k]);
		    if(k==(c-1))  
		    printf("\n"); 
    }  
    }
    return 0; 
} 

