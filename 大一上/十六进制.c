#include<stdio.h>
#include<string.h>
int main(void)
{
	//printf("%#x",16);
	char a[]={"123"};
	char b[]={'1','2','3'};
	printf("a的长度是%d\n",strlen(a));
	printf("b的长度是%d\n",strlen(b));
	printf("a的大小是%d\n",sizeof(a));
	printf("b的大小是%d",sizeof(b));
	
	return 0;
}
