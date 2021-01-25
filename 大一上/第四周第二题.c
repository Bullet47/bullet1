#include<stdio.h>
#include<string.h> 
int main(void)
{
	int n;//读入次数
	scanf("%d",&n);
	int i,a,b,k,m1,m2,m3,j,aj;
	aj=0;
      j=0;
	char str[100],temp[5];
	memset(str,0,sizeof(str));
	memset(temp,0,sizeof(temp));//字符数组也要初始化 
	for(i=0;i<=n-1;i++)
	{
		scanf("%d %d",&a,&b);
		for(k=a;k<=b;k++)
		{
		  m1=k/100;
		  m2=k/10-m1*10;
		  m3=k-100*m1-10*m2;
		  if(k==m1*m1*m1+m2*m2*m2+m3*m3*m3)//正确 
		   {    
		       j=strlen(str);
		        aj++;
		        str[j]=m1+48;
		        str[j+1]=m2+48;
		        str[j+2]=m3+48;
		        str[j+3]=' ';
               /*	itoa(k,temp,10);
            	strcat(temp," ");
            	strcat(str,temp);*/ 
		   }
		   if(k==b)
		   {
		   	if(aj==0)
		   	{
		   		strcat(str,"-1\n");
		   	
			   }
			if(aj!=0)
			{
				strcat(str,"\n");
			}
			   }	
		}
	}
	printf("%s",str);
 return 0;
}
