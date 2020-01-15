#include <stdio.h>
int x = 1;
void fun (int y)
{
	int x = 5;
	x += y++;
	printf("%d", x);
 } 
 int main ( )
 {
 	int a = 3;
 	fun(a);
 	x += a++;
 	printf("\n%d",x);
 	return 0;
 }
