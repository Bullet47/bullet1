#include<stdio.h>
#include<string.h> 
int main(void)
{
	char a[500];
	fgets(a,50,stdin);
	printf("%d",strlen(a)-1);
	return 0; 
}
