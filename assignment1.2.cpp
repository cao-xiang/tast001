#include <iostream>
#include <string.h>
int another(char *a); 
using namespace std;
int main()
{
	cout<<"Please write a password and the password meets the requirements.\n"
	    <<"a.A password must have at least eight characters.\n"
		<<"b.A password must consist of only letters and digits.\n"
		<<"c.A password must contain at least two digits.\n";
	char a[100];
	another(a);
}
int another(char *a)
{
	int n,i;
	int b=0;
	int c=0;
	cin>>a;
	n=strlen(a);
	if(n>=8)
	{
		for(i=0;i<100;i++)
		{
			if(a[i]>='0'&&a[i]<='9')
			{b++;}
			else if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
			{c++;}
			else
			{break; }	
		}
		if(b>=2&&c>=1)
		{cout<<"True";}
		else
		{ cout<<"False";}
	}
	else
	{cout<<"False";	}
}

