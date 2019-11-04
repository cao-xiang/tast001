#include <stdio.h>
int main()
{
	int t;
	while(scanf("%d",&t))
	{
		if(t>=0&&t<=100)
		{
			if(t>=90)
			{
				printf("A");
			}
			else
			{
				if(t>=80)
				{
					printf("B");
				}
				else
				{
					if(t>=70)
					{
						printf("C");
					}
					else
					{
						if(t>=60)
						{
							printf("D");
						}
						else
						{
							printf("E");
						}
					}
				}
			}
			
		}
		else
		{
			printf("Score is error!");
		}
	}
	return 0;
	
}
