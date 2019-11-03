#include <stdio.h>
int main()
{
	char a,b,c;
	while(scanf("  %c%c%c",&a,&b,&c)!=EOF)
	{
	if((a<b)&&(b<c))
	printf("%c %c %c\n",a,b,c);
	if((a<c)&&(c<b))
	printf("%c %c %c\n",a,c,b);
	if((b<a)&&(a<c))
	printf("%c %c %c\n",b,a,c);
	if((b<c)&&(c<a))
	printf("%c %c %c\n",b,c,a);
	if((c<a)&&(a<b))
	printf("%c %c %c\n",c,a,b);
	if((c<b)&&(b<a))
	printf("%c %c %c\n",c,b,a);
	}
	return 0; 
}
