#include <stdio.h>
int main()
{
	int k,t,m,n;
	int x=0,y=0;
	while(scanf("%d %d",&m,&n))
	{
	for(t=m;t<=n;t++)
	{
		if(t%2==0)
		x+=(t*t);
	}
	for(k=m;k<=n;k++)
	{
		if(k%2!=0)
		y+=(k*k*k);
	}
	printf("%d %d",x,y);
    }
}
