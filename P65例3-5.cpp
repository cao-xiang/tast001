#include <math.h>                                            /*�Ժ���sqrt������*/ 
#include <stdio.h>                      
int main()
{
	double a,b,c,s,area;
	printf("Input data:");                                   /*��ʾ����������Ϣ*/ 
	scanf("%lf,%lf,%lf",&a,&b,&c);                           /*�������߳��ȣ�����֮���ö��ŷָ�*/ 
	s=(a+b+c)/2.0;                                           /*���㹫ʽ�е�s*/ 
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area is:%8.3lf",area);
}
