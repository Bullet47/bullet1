#include<stdio.h>

void InsertSort(int a[],int n)
{
    int i,j;
    int temp;

    for(i=1;i<n;i++)               //ִ��n-1�˲���
    {
        temp=a[i];                 //��Ҫ��������ݴ浽temp
        j=i-1;
        while(j>=0 && temp<a[j])   //�ҳ�temp�Ĳ���λ��
            {
			a[j+1]=a[j--]; 
		    }        //��a[j]���ƣ��ٽ�j��1
        a[j+1]=temp;               //��temp���뵽ָ��λ��
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
