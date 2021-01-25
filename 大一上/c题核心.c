#include<stdio.h>
int main(void)
{char str[101],*p,len,i,k,j,n;//(i判断有多长) 
p=str;
scanf("%s",str);
for(i=1;p[i]!='\0';i++);//判断字符数组有多长(l为输入的字符串长度） 
if(i==3){
	if (p[0]=='S'&&p[1]=='C'&&p[2]=='U')
	printf("yes!");
	else
	printf("no！"); 
	
	}//当输入刚好为三个时，直接判断是否为SCU
else 
{
for(k=0;k<100;k++)
if(p[k]=='S'&&p[k+1]=='C'&&p[k+2]=='U')//当在前100个字符中找到了“SCU”时
break;
//printf("%d\n",k);
for(j=k;p[j-1]=='A';j--);//若j=0，则证明S前面的字母都为A
for(n=k+3;p[n]=='A';n++);//若n=l，则证明U后面的字母都为A
//printf("%d\n",k);
{if(j==0&&n==i)
printf("Yes!");
else
printf("No!");}}
//printf("%d\n",n);
 //for(n=k+3;p[k+3]!='A';n++);
 //printf("%d%d",j,n) ;
 
 //for(j=k;p[j-1]=='A';j--)



//for(j=i;p[j]=='A';i--);

//else if(i>100)
//break ;
//printf("no！");//数组中没有SCU的情况


//printf("%c",p[2]);
return 0;
 } 
