#include<stdio.h>
#include<string.h>
int main(void)
{   
   int a[100],b[100];
   int n,i,k,m,w,h,g;
   g=h=0;
	m=0;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	scanf("%d",&n);
	if(n<=6||n%2!=0)
	printf("ERROR");
	else
	{ //��for ѭ���� ��¼ ÿ�ε���������λ�� �� 
		for (i=3;i<=(n/2);i+=2)
		{ for(k=3;k<=n-1;k+=2)
		   {
		   	if((i+k)!=n)
		   	 continue;
		   	else //�������������������� 
		   	 {  
		   	   for(w=2;w<i;w++){
              if(i%w==0){
                 g++;  // ����������1
                    } 
                        }
              for(w=2;w<k;w++){
              if(k%w==0){
                 h++;  // ����������1
                    } 
                        }
            if(g!=0||h!=0)
            { g=0;
              h=0;
             continue;
			}
              else{
              	a[m]=i;
		   	 	b[m]=k;
		   	 	m++;
			  }
				}
		   }
		}
	}
	for(i=0;i<=m-1;i++)
	{
		printf("%d %d \n",a[i],b[i]);
	}	
	return 0;
 } 
