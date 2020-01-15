#include <stdio.h>

long fun(int n)
{
	long s;
	if (n == 2 || n == 1)
		s = 2;
	else
		s = n - fun(n - 1);
	return s;
}
int  main()
{
	printf("%ld\n", fun(3));
return 0;
}

