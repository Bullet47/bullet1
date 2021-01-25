#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef int Bool;
int main(void)
{
	FILE *fp;
	int a;
	fp=fopen("C:\\Users\\´àÏãÃ×´òËÀÄã\\Desktop\\²âÊÔ.txt","r+"); 
	//fseek(fp,0L,SEEK_CUR);
//	printf("%ld ",ftell(fp));
	if(fp==NULL)
	{
		printf("´ò¿ªÊ§°Ü");
		return -1;
	}
	char str[1000]={0};
	char temp;
	int i=0;
	//while((temp=fgetc(fp))!=EOF)
	//{
	//	b[i]=temp;
	//	i++;
	//} 
	fread(str,sizeof(str[0]),sizeof(str)/sizeof(str[0]),fp);
	//char str[20]={"·ê¿¼±Ø¹ý°¡°¡"};
	//fread(str,sizeof(str[0]),sizeof(str)/sizeof(str[0]),fp);
	///fwrite(str,sizeof(char),sizeof(str)/sizeof(str[0]),fp);
	//a=feof(fp);
	//printf("%ld ",ftell(fp));
	//printf("%d",a);
	printf("%s",str);
	fclose(fp);
	/*char a[3][4]={{"123"},"456","789"};
	char *b[6]={"123","456","789"};
	printf("%s ",a[0]);
	printf("%s",b[0]);*/
	return 0;
}
