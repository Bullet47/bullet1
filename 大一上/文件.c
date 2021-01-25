#include<stdio.h>
#include<string.h>
int main(void)
{
	
	FILE *fp;
	char str[100];
	memset(str,0,sizeof(str));
	int i;
	fp=fopen("C:\\Users\\脆香米打死你\\Desktop\\1.txt","r+"); 
	fgets(str,sizeof(str),fp);
    if(fp==NULL)
    {
    	printf("没打开"); 
	}
    //scanf("%s",str);
    //fputs(str,fp);
    printf("%s",str);


	return 0;
}
