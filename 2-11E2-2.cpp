#include<stdio.h>
#include<math.h>
int main()
{
	printf("输入三边长abc，空格分割：");
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	float s=(a+b+c)/2;
	float area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("\n面积为%f",area);
}
