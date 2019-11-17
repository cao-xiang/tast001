#include <stdio.h>
int main()
{
	float r=1.4;
	float r2=r*r;
	const float pi=3.14;
	printf("圆周长:%f\n",2*r*pi);
	printf("圆面积:%f\n",pi*r2);
	printf("球表面积：%f\n",4*pi*r2);
	printf("球体积：%f\n",(4.0/3)*pi*r2*r);
}
