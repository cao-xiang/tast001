#include <iostream>
#include <string>
using namespace std;
class Rational
{
	private:
		long long nu;long long de;
	public:
		Rational(long long n=1,long long d=2)
		{
			nu=n;de=d;
		 } 
		friend ostream& operator<<(ostream& cout,Rational& x);
		Rational operator-( );
	    Rational operator+(const int d);
		friend Rational operator+(const double a,Rational b);
		Rational operator++(int);
		operator double();
};
ostream& operator<<(ostream& cout,Rational& x)
{
	cout<<x.nu<<"/"<<x.de<<endl;
	return cout;
}
Rational  Rational:: operator-( )
{
	return Rational(-nu,de);
}
Rational Rational:: operator+(const int d)
{
	Rational temp(nu+de*d,de);
	return temp;
}
Rational  operator+(const double a,Rational b)
{
	return b+a;
}
Rational Rational::operator++(int) 
{
	Rational temp(nu+de,de);
	return temp;
}

Rational::operator double()
{
	double x;
	x = double(this->nu) / this->de;
	return x;
}
int main() 
{
    Rational rat0;  
	cout << rat0 << endl;  
	Rational rat1 = -rat0;  
	cout << rat1 << endl;  
	Rational rat2 = rat1 + 34;  
	cout << rat2 << endl;  
	Rational rat3;  
	rat3 = 12 + rat2;   
	rat3++;  
	cout << rat3 << endl;
	cout << (double)rat3 << endl;                                             //第一个问题// 
	double sum=0;
	for(int a=1;a<50;a++)
	{
		Rational x(a,a+1);
		sum=sum+(double)x;
	}
	cout <<"question 2 :"<<"\n"<<"1/2+2/3+3/4+...+49/50="<<sum<<endl;        //第二个问题// 
}
