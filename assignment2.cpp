#include <stdlib.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class MyInteger
{
    private:
	    int value;
	public:
		MyInteger(int i=0);
		int addition(MyInteger x);
		int get()const;
		int parselnt(string a);
};
MyInteger::MyInteger(int i)
{
	value=i;
}
int MyInteger::addition(MyInteger x)
{
	int y=this->value+x.value;
	return y;
}
int MyInteger::get()const
{return value;}
int MyInteger::parselnt(string a)
{
	stringstream xx;int y;
	xx<<a;xx>>y;
	return y;
}
int main()
{
	MyInteger X=MyInteger(100);
	X.get();
	cout<<"\n"<<X.get();
	X.addition(23);
	cout<<"\n"<<X.addition(23);
    X.parselnt("45");
    cout<<"\n"<<X.parselnt("45");
    return 0;
}
