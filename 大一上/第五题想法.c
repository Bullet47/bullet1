/*用sscanf直接读取一行数的整形数 然后判断是否为回文数 ??//如果可以这样输入的话 再使用sscanf处理 
这样有个问题 若字符串类型为sdsa1323dad1这样可能被误判为回文数 以上方法错误 sscanf没有那么牛逼
  只有一位一位的读取，数组的第几号等于数组另外*/
  对每个读入的字符串从左边第0个字符开始分析，根据数字的ASCII码范围在48~57进行录入，然后再判断是否为回文数，并用数组
  进行保存，运用atoi函数转化为整形 然后作比较 输出 
  目前问题关键 1.如何读取多行字符串？ 2.怎么分离他们每个字符串？ 
#include<stdio.h>
#include<string.h>
int main(void)
{
	char str1[1000],ch,str[1000];//str1为临时数组 
	int a,b,c;
	int i;
	i=0;
  while ((ch=getchar())!=EOF)//此处应用了EOF
    {
     scanf("%s",str);  
	 sscanf(str1,"%*s%d",str);
    }
    printf("%s",str);
    return 0;
}
