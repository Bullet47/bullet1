//scanf��getsͬʱ����ʱ����ûgets���� 

#include<stdio.h>
int main(void)
{char str[100],enter[100];
 scanf("%s",str);
 gets(enter);
 gets(str);
 printf("%s",str);
 return 0;
}
