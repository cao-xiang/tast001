#include <iostream>
using namespace std;
class Rational
{
	private:
		int nu=1;
	public:
		double rat;
		Rational();
		Rational (double a):rat(){}
		friend ostream& operator<<(ostream&,Rational&);
		friend Rational operator-(Rational& x);
		friend Rational operator+(Rational& x,const int y);
		friend Rational operator+(const double a,Rational& b);
		Rational& operator++(int);
		friend Rational operator/(Rational& c,int d);
		operator double();
};
Rational::Rational() 
{
	rat=nu;
}
ostream& operator<<(ostream& cout,Rational& x)
{
	cout<<x.rat<<endl;
	return cout;
}
Rational operator-(Rational& x)
{
	x.rat=-x.rat;
	return Rational(x);
}
Rational operator+(Rational& x,const int y)
{
	Rational temp;
	temp.rat=x.rat+y ;
	return temp;
}
Rational operator+(const double a,Rational& b)
{
	Rational temp;
	temp.rat=a+b.rat ;
	return temp;
}
Rational& Rational::operator++(int) 
{
	rat++;
	return *this;
}
Rational operator/(Rational& c,int d)
{
	c.rat =c.rat /d ;
	return c.rat ;
}
Rational::operator double()
{
	return this->rat;
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
	cout << rat3 << endl;  
	rat3++;  
	cout << (double)rat3 << endl;                                             //第一个问题// 
	int a;double sum=0;
	int de=2;
	Rational rat4;
	Rational rat5;
	for(a=1;a<50;a++)
	{
		sum+= (double)rat5/de;
		rat5=rat4++;
		de++;
	}
	cout <<"question 2 :"<<"\n"<<"1/2+2/3+3/4+...+49/50="<<sum<<endl;        //第二个问题// 
}
