#include <stdio.h>
void main()
{
	long a=0xabcdef;
	double b=1.0E8;
	int c=-1;
	printf("\n%f,%-81x",b,a);
	printf("\n%+010.21e%%",b);
	printf("%d,%u,%x,%o",c,c,c,c);
	printf("\n%C %%%s",'A',"Hello%");
}
