#include <stdio.h>
int main()
{
	float r=1.4;
	float r2=r*r;
	const float pi=3.14;
	printf("Բ�ܳ�:%f\n",2*r*pi);
	printf("Բ���:%f\n",pi*r2);
	printf("��������%f\n",4*pi*r2);
	printf("�������%f\n",(4.0/3)*pi*r2*r);
}
