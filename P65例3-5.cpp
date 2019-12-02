#include <math.h>                                            /*对函数sqrt的声明*/ 
#include <stdio.h>                      
int main()
{
	double a,b,c,s,area;
	printf("Input data:");                                   /*提示输入数据信息*/ 
	scanf("%lf,%lf,%lf",&a,&b,&c);                           /*输入三边长度，两数之间用逗号分隔*/ 
	s=(a+b+c)/2.0;                                           /*计算公式中的s*/ 
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area is:%8.3lf",area);
}
