#include <stdio.h>
int f1(int x)
{
	return x==1? 1: x+f1(x-1);
}
long f2(int y)
{
	return (y==1||y==2)?
	        2:f1(y)*f2(y-1);
}
int main()
{
	printf("\n%ld",f2(3));
	return 0;
}
