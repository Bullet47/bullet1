#include <stdio.h>
#include <stdlib.h>
#include<string.h> 
struct num{
	int line[100];//name
                                   //  Ȼ����������Ϊ��һ�еĵ�һ�������ٵڶ��еĵ�һ����  ֮���� ��һ�еĵڶ����� 
             };                 //��ô���������� ���� ���� ������ ��ô�� ����������е� ������ڶ��� 
int main(void)
{   int r,c,i,j,k,m,l,t;
  int x,y;
  char acmd[100],scmd[100];
  memset(scmd,0,sizeof(c));//��ճ�ʼ���ַ����飡�� 
  scanf("%d%d",&r,&c);
  int a[r+1][c+1]; 
  int f[r+1][c+1];//����Ҫ��ӡ���������� 
  memset(f,0,sizeof(f));
  memset(a,0,sizeof(a));
  memset(scmd,0,sizeof(scmd));
   getchar();
   for (i=0;i<r;i++)//�ӵ�0�п�ʼ 
    {
        for (k = 0;k < c;k++)//�ӵ�0�п�ʼ 
         scanf("%d", &f[i][k]);//��ά����Ƕ�������ʼ��ʽ  �����γ�ʼ�� �ַ��Ͳ��ó�ʼ 
    }
    getchar();
  struct num n[100];
  //���ֱ��¼ÿһ������ i����ÿһ�� 
  /*for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 n[i].line[k]=a[i][k];
   } 
  } */
//�����ط��Ľ� һ �Ҳ�����ֻÿһ�� ����Ҫ��һ�������¼������ٴ���� 
scanf("%d",&t); 
for(l=1;l<=t;l++)
{  
	scanf("%s",scmd);
if(strcmp(scmd,"SR")==0)// SR x1 x2 ����x1�к�x2��
{ for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 n[i].line[k]=f[i][k];
   } 
  } 
scanf("%d%d",&x,&y);
  	for (i=0;i<r;i++)  
{  //�����д�ӡ��ʽ 
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
	      for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	  memset(n[i].line,0,sizeof(n[i].line));
   } 
  }                                     //memset(f,0,sizeof(f));  
    } 
else if(strcmp(scmd,"SC")==0)
{for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 n[i].line[k]=f[i][k];
   } 
  } 

scanf("%d%d",&x,&y);
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
else if(strcmp(scmd,"DR")==0)//ɾ��x�� 
{for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 n[i].line[k]=f[i][k];
   } 
  } 
scanf("%d",&x);
for (i = 0; i<r;i++)  
{  //�����д�ӡ��ʽ 
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
  for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	  memset(n[i].line,0,sizeof(n[i].line));
   } 
  }
r--;}
else if(strcmp(scmd,"DC")==0)
{
for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 n[i].line[k]=f[i][k];
   } 
  } 
  scanf("%d",&x);
	
	for (i= 0; i<r;i++)  
{ 
	    for ( k=0;k<c;k++)
          { if(k!=(x-1)&&k!=x)
		    {
		    f[i][k]=n[i].line[k]; 
            continue;
			}
			else if(k==(x-1))
			{
				f[i][k]=n[i].line[x];
                continue;
			}
			else if(k==x)
			{    
                continue;
			}			
	       }    
} 
  for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	  memset(n[i].line,0,sizeof(n[i].line));
   } 
  }
c--;
}
else if(strcmp(scmd,"IR")==0)//��x�����һ�� һ��ȫΪ0�� 
{  for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 n[i].line[k]=f[i][k];
   } 
  } 
scanf("%d",&x);
  r++;
 	for (i = 0; i<r;i++)  
{  //�����д�ӡ��ʽ 
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
	  for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	  memset(n[i].line,0,sizeof(n[i].line));
   } 
  }
}
else if(strcmp(scmd,"IC")==0)
{ 
for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 n[i].line[k]=f[i][k];
   } 
  } 
  scanf("%d",&y);
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
  for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	  memset(n[i].line,0,sizeof(n[i].line));
   } 
  }
}
}
  
  	for (i=0;i<r;i++)    //�����д�ӡ��ʽ 
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

