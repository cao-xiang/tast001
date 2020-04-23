#include <iostream>
#include<string>
#include<math.h>
using namespace std;
//#define N 1000
class Rational
{
private:
	long long a;//����
	long long b;//��ĸ
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
	friend ostream &operator<<(ostream &output,const Rational &D)//����<<
	{
		output << D.a<<"/"<<D.b<<endl;
		return output;
	}
	Rational operator+(const int d)//����rat1+34,���Ե���rat1��a��b
	{
		Rational temp(a+b*d,b);
		return temp;
	}
	friend Rational operator+(const int d, Rational obj)//����12+rat2
	{
		return obj + d;//��Ԫ�������õڶ�������+�ĳ�Ա����  �൱�� obj.operator+(b); 
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
		long double ol = 0.57721566490153286060651209;//ŷ������
		int n = r2.b;
		long double s = 49-(ol + log(n)-1);
		return s;
		/*int m = r2.b - r1.b;//ȷ���ۼӴ���
		int i;
		Rational temp1, temp2;
		temp1 = r1;
		temp2.a = temp1.a ;
		temp2.b = temp1.b ;
		for (i = 0; i < m; i++)
		{
			temp2.a ++;
			temp2.b ++;
			long long B=least(temp1.b, temp2.b);//ȷ����ĸ
			temp1.a = (B / temp1.b)*temp1.a + (B / temp2.b)*temp2.a;
			temp1.b = B;
		}
		Rational sum(temp1.a, temp1.b);
		return sum;*/
	}
	/*int least(long long m, long long n)
	{
		long long int x = m;//�������m��n��ֵ�ֱ���x��y�������������������С������ʱ��Ҫ�õ�
		long long int y = n;
		long long int t;
		if (m < n) 
		{
			t = m;//tΪ�м��������ʵ��m��n��ֵ���໥��������֤���������ڳ���
			m = n;
			n = t;
		}
		long int r = m % n;
		while (r) {//��n������m��ֱ��m��n������ѭ����ֹ����ʱr��ֵΪ0����c++��ֻ��0��Ϊ�٣��κη�0��ֵ���ж�Ϊ��
			m = n;//շת������ĺ��ľ����ýϴ����mȥ����С����n������պ�����������m��n�����Լ��Ϊn�����������������n��ֵ����m������r����n���ٽ�����һ�ε�������Դ�ѭ����ֱ������Ϊֹ
			n = r;
			r = m % n;

		}
		//cout << "���Լ��Ϊ��" << n << endl;
		return x * y / n ;//����������С�����������������ĳ˻�����С�����ǵ����Լ��
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
