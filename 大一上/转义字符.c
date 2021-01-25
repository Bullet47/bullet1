#include<stdio.h>
#include<string.h>
int main(void)
{  
    union {
    	int i;
    	int j;
	}a;
	a.i=5;
	a.i=7;


	
	printf("%d %d",a.i,a.j);
}

