#include <stdio.h>
int strCompare (char *a,char *b);
int main()
{
	char a[6];char b[6];
	int x,i;
	printf("�������һ���ַ�����"); 
	gets(a);
	printf("������ڶ����ַ�����");
	gets(b);
	x=strCompare(a,b);
	printf("%d",x);
}
int strCompare (char *a,char *b)
{
	int i,end=0;
	for(i=0;i<5;i++)
	{
			if(a[i]==b[i])
			{
				continue;
			}
			else if(a[i]!=b[i])
			{
				end=a[i]-b[i];
				break;
			}
	}
	return end;
}
