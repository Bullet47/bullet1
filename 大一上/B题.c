#include<stdio.h>
int main(void)
{ int n1,n2,n3,n4,n5,d,q,a[5];//d为公差，q为公比 
printf("请输入五个正整数");
scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5) ;
while (n1==0&&n2==0&&n3==0&&n4==0&&n4==0)
break;
if(n2-n1==n3-n2&&n5-n4==n3-n2&&n2/n1==n3/n2&&n5/n4==n3/n2){	
printf("case four\n%d %d %d %d %d",n1,n1,n1,n1,n1);
}
 else if(n2-n1==n3-n2&&n5-n4==n3-n2){
	d=n2-n1;
	a[0]=n1+5*d;
	a[1]=n1+6*d;
	a[2]=n1+7*d;
	a[3]=n1+8*d;
	a[4]=n1+9*d;	
printf("case one\n%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}
else if(n2/n1==n3/n2&&n5/n4==n3/n2){
	q=n2/n1;
	a[0]=n5*q;
	a[1]=n5*(q*q);
	a[2]=n5*(q*q*q);
	a[3]=n5*(q*q*q*q);
	a[4]=n5*(q*q*q*q*q);	
printf("case two\n%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}
else if(n3==n1+n2&&n4==n2+n3&&n5==n3+n4){
	a[0]=n4+n5;
	a[1]=n5+a[0];
	a[2]=a[0]+a[1];
	a[3]=a[1]+a[2];
	a[4]=a[2]+a[3];	
printf("case three\n%d %d %d %d %d",a[0],a[1],a[2],a[3],a[4]);
}

return 0;
}
