#include <stdio.h>
#include <stdlib.h>
struct number{
	char num[100];//存放每一列的数 
             };
int main(void)
{   int r,c,i,j,k;
  scanf("%d%d",&r,&c);
  struct number s[101];//数组的数组 
    int arr2D[r][c];
    getchar();
    for(i=0;i<=r-1;i++)
    fgets(s[i].num,201,stdin);
    for(i=0;i<=r-1;i++)//一维维整型数组转换为二维整型数组   要加二 因为中间有0！！ 
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
   
