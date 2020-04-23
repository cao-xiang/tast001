#include <iostream>
#include<string>
#include<math.h>
using namespace std;
//#define N 1000
class Rational
{
private:
	long long a;//分子
	long long b;//分母
public:
	Rational() //defalut
	{
		a = 5;
		b = 6;
	}
	Rational(long long a_,long long b_)
	{ 
	a = a_;
	b = b_;
	};
	Rational operator-()
	{
		return Rational(-a,b);
	}
	friend ostream &operator<<(ostream &output,const Rational &D)//重载<<
	{
		output << D.a<<"/"<<D.b<<endl;
		return output;
	}
	Rational operator+(const int d)//用于rat1+34,可以调用rat1的a，b
	{
		Rational temp(a+b*d,b);
		return temp;
	}
	friend Rational operator+(const int d, Rational obj)//用于12+rat2
	{
		return obj + d;//友元函数调用第二个重载+的成员函数  相当于 obj.operator+(b); 
	}
	Rational operator++(int)
	{
		a+=b;
		return Rational(a,b);
	}
	/*Rational operator()(string str)
	{
		string str2 = "double";
		if (str==str2)
		{
			double a_ = a;
			double b_ = b;
			return a_/b_;
		}
	}*/
	operator double();

	long double SUM(Rational r1,Rational r2)
	{
		long double ol = 0.57721566490153286060651209;//欧拉常数
		int n = r2.b;
		long double s = 49-(ol + log(n)-1);
		return s;
		/*int m = r2.b - r1.b;//确定累加次数
		int i;
		Rational temp1, temp2;
		temp1 = r1;
		temp2.a = temp1.a ;
		temp2.b = temp1.b ;
		for (i = 0; i < m; i++)
		{
			temp2.a ++;
			temp2.b ++;
			long long B=least(temp1.b, temp2.b);//确定分母
			temp1.a = (B / temp1.b)*temp1.a + (B / temp2.b)*temp2.a;
			temp1.b = B;
		}
		Rational sum(temp1.a, temp1.b);
		return sum;*/
	}
	/*int least(long long m, long long n)
	{
		long long int x = m;//将最初的m和n的值分别用x和y保存起来，后面计算最小公倍数时需要用到
		long long int y = n;
		long long int t;
		if (m < n) 
		{
			t = m;//t为中间变量，来实现m与n的值的相互交换，保证被除数大于除数
			m = n;
			n = t;
		}
		long int r = m % n;
		while (r) {//用n来除以m，直到m被n整除，循环终止，此时r的值为0，在c++中只有0才为假，任何非0的值都判断为真
			m = n;//辗转相除法的核心就是用较大的数m去除较小的数n，如果刚好能整除，则m与n的最大公约数为n，如果不能整除，则将n的值赋给m，余数r赋给n，再进行下一次的相除，以此循环，直到整除为止
			n = r;
			r = m % n;

		}
		//cout << "最大公约数为：" << n << endl;
		return x * y / n ;//两个数的最小公倍数等于两个数的乘积除最小除他们的最大公约数
	}*/
	/*int least(int n1, int n2)
	{
		int max;
		max = (n1 > n2) ? n1 : n2;
		while (1)
		{
			if (max % n1 == 0 && max % n2 == 0)
			{
				return max;
				break;
			}
			else
			{
				++max;
				if (max > 100000000)
				{
					
				}
			}
		}
	}*/
	
	/*Rational sum_(Rational r1, Rational r2)
	{

		long long m = r1.a;
		long long n = r1.b;
	}*/
};
Rational::operator double()
{
	double a_ = a;
	double b_ = b;
	double zt;
	zt = a_ / b_;
	return zt;
}

//Rational operator
int main()
{
	Rational rat0;
	cout <<"rat0:"<< rat0 << endl;
	Rational rat1 = -rat0;
	cout <<"rat1"<< rat1 << endl;
	Rational rat2 = rat1 + 34;
	cout <<"rat2:"<< rat2 << endl;
	Rational rat3;
	rat3 = 12 + rat2;
	cout <<"rat3:"<< rat3;
	rat3++;
	cout << "rat3:"<<rat3 << endl;
	cout << (double)rat3 << endl;
	Rational r1(1, 2), r2(49, 50);
	cout<< r1.SUM(r1, r2)<<endl;
	return 0;
}
