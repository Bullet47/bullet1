#include <stdio.h>


void px(int m1 ,int m2 ,int m3, int m4)
{   
   
   int m,k,temp,a[4]={m1,m2,m3,m4};
   
	for(m=0;m<4;m++)
	{
		for(k=m+1;k<4;k++)
		{
			if(a[m]>a[k])
			{
				temp=a[m];
				a[m]=a[k];
				a[k]=temp;
			}
		}
	}
	for(m=0;m<4;m++)
	{
		printf("%d ",a[m]);
		if(m==3)
		{
			printf("\n");
		}
	}
}

int main() {

    int n, i;

    scanf("%d", &n);  // 有n组数据

    for (i = 0; i < n; i++) {

        int a, b, c, d;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        px(a,b,c,d);
    } 
    return 0;

}


