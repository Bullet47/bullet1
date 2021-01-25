#include <stdio.h>
int main(void)
{
	int r,c,i;
	char a[r][c]; 
  scanf("%d%d",&r,&c);
  
  getchar();
  for(i=0;i<=r-1;i++)
  {
  	sscanf("%s",a[i]);
  }
  printf("%s",a);
  return 0;
}
