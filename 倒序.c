#include<stdio.h>
#include<string.h>
int main() 
{
    int i,j,k,x,q,len1,len2; 
    char a[1000],temp[100];
    memset(a,0,sizeof(a));
     fgets(a,100,stdin);
        len1=strlen(a);
        j=0;
        for(i=0;i<=len1;i++)
        {  
           if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z'))
           { 
           	 temp[j]=a[i];
           	 j++;
           	 if(a[i+1]<'A'||(a[i+1]>'Z'&&a[i+1]<'a')||a[i+1]>'z')//结束标志，直接反向输出前面那个组 
           	 {
           	    len2=strlen(temp);
           	    for(q=len2-1;q>=0;q--)
           	    {
           	    	printf("%c",temp[q]);
				   }
				   memset(temp,0,sizeof(temp));
				   j=0;
				}
		   }
		   else
		   {
		   	 printf("%c",a[i]);
		   }
        }
    return 0; 
}
