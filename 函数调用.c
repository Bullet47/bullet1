#include<stdio.h>//������Լ����õĺ�����main�������棬�����Ҫ��Ԥ������˵���ҵĺ������� 
double average(double a,double b);
int main(void)
{ 
double x,y;
 x=3,y=11;
 printf("average:%f",average(x,y));
 return 0;
}
  double average(double a,double b)
 {
 return (a+b)/2; 
 }
 
