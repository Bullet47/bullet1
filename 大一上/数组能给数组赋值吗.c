#include <stdio.h>
#include <stdlib.h>

#define ROW 3 
#define COL 2
con
int main(void)
{
    int arr1D[]  = {1,2,3,4,5,6};
    int arr2D[ROW][COL];
    int i,j;
    //һάά��������ת��Ϊ��ά��������
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<2;j++)
        {
         arr2D[i][j]=arr1D[i*COL+j];
        }
    }
    //��ά���������ӡ��ʾ 
        for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
          printf("%d  ", arr2D[i][j]);  
        }
         printf("\n");    
    }
    system("pause");
    return 0;
}
