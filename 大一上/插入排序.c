#include<stdio.h>

void InsertSort(int a[],int n)
{
    int i,j;
    int temp;

    for(i=1;i<n;i++)               //执行n-1趟插入
    {
        temp=a[i];                 //将要插入的数暂存到temp
        j=i-1;
        while(j>=0 && temp<a[j])   //找出temp的插入位置
            {
			a[j+1]=a[j--]; 
		    }        //将a[j]后移，再将j减1
        a[j+1]=temp;               //将temp插入到指定位置
        b[j+1]=temp+48;
        
    
}
void main()
{
    int a[10],i;
    printf("please input 10 numbers:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("The array is:\n");
    for(i=0;i<10;i++)
        printf("%-4d",a[i]);
    InsertSort(a,10);
    printf("\nAfter sort the array is:\n");
    for(i=0;i<10;i++)
        printf("%-4d",a[i]);
    printf("\n");
    char b[11]={0};
}
