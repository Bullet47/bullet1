#include <stdio.h>
#include <stdlib.h>
struct number{
	char num[100];//���ÿһ�е��� 
             };
int main(void)
{   int r,c,i,j,k;
  scanf("%d%d",&r,&c);
  struct number s[101];//��������� 
    int arr2D[r][c];
    getchar();
    for(i=0;i<=r-1;i++)
    fgets(s[i].num,201,stdin);
    for(i=0;i<=r-1;i++)//һάά��������ת��Ϊ��ά��������   Ҫ�Ӷ� ��Ϊ�м���0���� 
    {
        for(j=0,k=0;j<=c-1;j+=2,k++)
        {
         arr2D[i][k]=s[i].num[j];
        }
    }
   
   /*for(i=0;i<=r-1;i++)
    {
        for(j=0;j<=c-1;j++)
        {
          printf("%d  ", arr2D[i][j]);  
        }
         printf("\n");    
    }*/
	printf("%s",arr2D) ;
   
    return 0;
}
   
