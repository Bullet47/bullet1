#include <stdio.h>
#include <stdlib.h>
#include<string.h> 

                                   //  Ȼ����������Ϊ��һ�еĵ�һ�������ٵڶ��еĵ�һ����  ֮���� ��һ�еĵڶ����� 
                //��ô���������� ���� ���� ������ ��ô�� ����������е� ������ڶ��� 
int main(void)
{   int r,c,i,j,k,m,l,t,z;
  int x,y;
  char scmd[100]; 
  scanf("%d%d",&r,&c);
  int a[r][c]; 
  int f[r][c];//����Ҫ��ӡ���������� 
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
  //���ֱ��¼ÿһ������ i����ÿһ�� 
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
   	 a[i][k]=f[i][k];
   } 
  }
 scanf("%d%d",&x,&y);
  	for (i=0;i<r;i++)  
{  //�����д�ӡ��ʽ 
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
else if(strcmp(scmd,"DR")==0)//ɾ��x�� 
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
{  //�����д�ӡ��ʽ 
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
else if(strcmp(scmd,"IR")==0)//��x�����һ�� һ��ȫΪ0�� 
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
{  //�����д�ӡ��ʽ 
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
  
  	/*for (i=0;i<r;i++)    //�����д�ӡ��ʽ 
    {
        for (k=0;k<c;k++)
          {
		    printf("%d ",f[i][k]);
		    if(k==(c-1))  
		    printf("\n"); 
    }  
    }*/
    
  	for (i=0;i<r;i++)    //�����д�ӡ��ʽ 
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

