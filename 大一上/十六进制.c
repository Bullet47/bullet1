#include<stdio.h>
#include<string.h>
int main(void)
{
	//printf("%#x",16);
	char a[]={"123"};
	char b[]={'1','2','3'};
	printf("a�ĳ�����%d\n",strlen(a));
	printf("b�ĳ�����%d\n",strlen(b));
	printf("a�Ĵ�С��%d\n",sizeof(a));
	printf("b�Ĵ�С��%d",sizeof(b));
	
	return 0;
}
