#include<stdio.h>
#include<string.h>
int main() 
{
    int len;
    int i,j,k,p=0; 
    char a[len];
   
   len=strlen(a);
    for (;p<=len;p++) 
	{
		a[p]=getchar();
	
	} 
        
        j=0;
        for(i=0;i<=len;i++)
        {
             if(a[i]==' '||a[i]=='\0')
             {
                  for(k=i-1;k>=j;k--)//�������ǿո���������ַ�������ʱ��ֱ����k����ǰһ�������������
                      printf("%c",a[k]);
                  if(a[i]!='\0')
                        printf(" ");//��Ϊ�����ǲ�Ϊ�ո����������Ի�Ҫ������֮��ֱ�����
                  j=i;//��¼�����ո���߱�����ʱ����i
             }
        }
        printf("\n");
     
    return 0; 
}
