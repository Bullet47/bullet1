//scanf和gets同时存在时会湮没gets！！ 

#include<stdio.h>
int main(void)
{char str[100],enter[100];
 scanf("%s",str);
 gets(enter);
 gets(str);
 printf("%s",str);
 return 0;
}
