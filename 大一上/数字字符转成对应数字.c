#include<stdio.h>
#include<stdlib.h> 
int main()
{
    char a[]="0";
    char b[]="n\a";
int c;
    c=atoi(a)+atoi(b);
    printf("c=%d\n",c);
    return 0;
}
