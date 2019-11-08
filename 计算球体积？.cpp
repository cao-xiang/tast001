#include <stdio.h>
#define PI 3.1415927
int main()
{
	double r,v;
	while(scanf("%lf",&r))
	{
	v=(4*PI*r*r*r)/3;

	printf("%.3lf\n",v);
}
 } 
