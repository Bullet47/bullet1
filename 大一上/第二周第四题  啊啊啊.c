#include <stdio.h>
#include <stdlib.h>
#include<string.h> 
struct num{
	int line[100];//name
	int row[100]                                                                                                                                                            ;//id  //��������һ�е�һ������Ȼ��������һ�� ����      �׸�ѭ�� 
	char g[100];//grade                                       Ȼ����������Ϊ��һ�еĵ�һ�������ٵڶ��еĵ�һ����  ֮���� ��һ�еĵڶ����� 
             };                                             //��ô���������� ���� ���� ������ ��ô�� ����������е� ������ڶ��� 
int main(void)
{   int r,c,i,j,k,m;
  int q[1000],w[1000];
  memset(q,0,sizeof(q));
  memset(w,0,sizeof(w));
  char acmd[100],scmd[100];
  memset(scmd,0,sizeof(c));//��ճ�ʼ���ַ����飡�� 
  scanf("%d%d",&r,&c);
  int a[r+1][c+1]; 
  int f[r+1][c+1];//����Ҫ��ӡ���������� 
  memset(f,0,sizeof(f));
  getchar();
   for (i=0;i<r;i++)//�ӵ�0�п�ʼ 
    {
        for (k = 0;k < c;k++)//�ӵ�0�п�ʼ 
            scanf("%d", &a[i][k]);//��ά����Ƕ�������ʼ��ʽ  �����γ�ʼ�� �ַ��Ͳ��ó�ʼ 
    }
    getchar();
    for(i=0;i<=1;i++)
  {
  scanf("%c",&scmd[i]);}
  struct num n[100];
  //���ֱ��¼ÿһ������ i����ÿһ�� 
  for (i=0;i<r;i++)
  {
   for (k=0;k<c;k++)
   {
   	 n[i].line[k]=a[i][k];
   } 
  } 
  /*for (i = 0; i<r;i++){
  	for (i = 0; i<r;i++)    //�����д�ӡ��ʽ 
    {
        for ( k=0;k<c;k++)
          {
		    printf("%d ",n[i].line[k]);
		    if(k==(c-1))  
		    printf("\n"); 
    }  
    }
  }*/
//�����ط��Ľ� һ �Ҳ�����ֻÿһ�� ����Ҫ��һ�������¼������ٴ���� 
  int x,y;
 scanf("%d%d",&x,&y);
if(strcmp(scmd,"SR")==0)// SR x1 x2 ����x1�к�x2��
{ memcpy(q,n[x-1].line,sizeof(n[x-1].line));
  memcpy(w,n[y-1].line,sizeof(n[y-1].line));//��һ��û������ �Ѿ���֤ 
  	for (i = 0; i<r;i++)  
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
	  for(m=0;m<c;m++)
     {f[i][m]=w[m];
	 }
	 continue;}

	else if(i==(y-1))
	{
		for(m=0;m<c;m++)
		{f[i][m]=q[m];
		}
     continue;	
	}   
    } 
}
  

else if(strcmp(scmd,"SC")==0)
{
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
{
for (i = 0; i<r;i++)  
{  //�����д�ӡ��ʽ 
 if(i!=(x-1)&&i!=x)
	 { 
	 for ( k=0;k<c;k++)
          { 
		    f[i][k]=n[i].line[k];
    }  
    continue;
	 }
  else if(i==(x-1))
  {
  	for (k=0;k<c;k++)
          { 
		   f[i][k]=n[i+1].line[k];
  }
  continue;
}
  else if(i==x)
  {continue;
  }
r--;} 
}
else if(strcmp(scmd,"DC")==0)
{
	
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
}
for (i=0;i<r;i++){
  	for (i=0;i<r;i++)    //�����д�ӡ��ʽ 
    {
        for (k=0;k<c;k++)
          {
		    printf("%d ",f[i][k]);
		    if(k==(c-1))  
		    printf("\n"); 
    }  
    }
  }
/*else if(strcmp(scmd,"IR")==0)
printf("5");
else if(strcmp(scmd,"IC")==0)
printf("6");*/
    
 /*for (i = 0; i<r;i++)    //�����д�ӡ��ʽ 
    {
        for ( k=0;k<c;k++)
          {
		    printf("%d ",a[i][k]);
		   if(k==(c-1))  
		   printf("\n"); }  
    }*/ 
 
    return 0;
    printf("\nr=%d",r); 
} 

