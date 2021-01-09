#include<stdio.h>//如果我自己调用的函数在main函数下面，则必须要在预处理下说明我的函数类型 
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
 
