#include<stdio.h>
int main(void)
{char str[101],*p,len,i,k,j,n;//(i�ж��ж೤) 
p=str;
scanf("%s",str);
for(i=1;p[i]!='\0';i++);//�ж��ַ������ж೤(lΪ������ַ������ȣ� 
if(i==3){
	if (p[0]=='S'&&p[1]=='C'&&p[2]=='U')
	printf("yes!");
	else
	printf("no��"); 
	
	}//������պ�Ϊ����ʱ��ֱ���ж��Ƿ�ΪSCU
else 
{
for(k=0;k<100;k++)
if(p[k]=='S'&&p[k+1]=='C'&&p[k+2]=='U')//����ǰ100���ַ����ҵ��ˡ�SCU��ʱ
break;
//printf("%d\n",k);
for(j=k;p[j-1]=='A';j--);//��j=0����֤��Sǰ�����ĸ��ΪA
for(n=k+3;p[n]=='A';n++);//��n=l����֤��U�������ĸ��ΪA
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
//printf("no��");//������û��SCU�����


//printf("%c",p[2]);
return 0;
 } 
