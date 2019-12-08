#include<stdio.h>
int main()
{
	double s=0.0,t;
	int k=1;
	for(k=1;k<=10;++k)
	s+=k;
	t=0.0;
	for(k=1;k<=5;++k)
	t+=k*k;
	s+=t;
	t=0.0;
	for(k=1;k<=20;++k)
	t+=k;s+1.0/t;
	printf("sum=%lf",s);     
}
