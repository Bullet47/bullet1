#include<stdio.h>
#include<string.h>
int main(void)
{
	/*char a[1000]={0};
	int i=0;
	char temp;
	while((temp=getchar())!=EOF)
	{
		a[i]=temp;
		i++;
	} 
	printf("%s%d",a,strlen(a));*/
	
	int a=0;
	char temp[50]={0};
	fscanf(stdin,"%s",temp);
	printf("%s",temp);
	
	
	
	
	return 0;
}
