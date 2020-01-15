#include <stdio.h>

unsigned f(unsigned num)
{
	unsigned k = 1;
	do
	{
		k *= num % 10;
		num /= 10;
	} while (num);
	return k;
}
int main()
{
	int x = 26;
	printf("\n%d", f(x));
return 0;
}

