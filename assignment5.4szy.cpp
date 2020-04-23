#include "pch.h"
#include <iostream>
#include<windows.h>
#include<string>
using namespace std;
class Day
{
private:
	int year;
	int month;
	int day;
public:
	Day() {}
	Day(int y, int m, int d) :year(y), month(m), day(d) {}
};
class Acount
{
protected:
	int number;
    float balane;
	float rate;
	Day date;
public:
	int tostring()const {}
	Acount() {}
	Acount(int nummber, float balanes, int y, int m, int d) :number(nummber), balane(balanes), rate(0.03)
	{
		Day temp(y, m, d);
		date = temp;
	}
	float deposit(int plus,int years)
	{
		float newplus;
		newplus = plus + balane + years * rate*balane;
		return newplus;
	}
	float withdraw(int jian, int years)
	{
		float newjian;
		newjian = balane + jian + years * rate*balane;
		return newjian;
	}
};

class checking :public Acount
{
 private:
	 int limit=-100;
	 float balance;
	 string id;
	 Day date;
	 int number;
	 float balane;
	 float rate;
public:
	checking(int nummber, float balanes, int y, int m, int d) :number(nummber), balane(balanes), rate(0.03)
	{
		Day temp(y, m, d);
		date = temp;
	}
	float check(int jian, int years)
	{
		balance = balane - jian + years * rate*balane;
		if (balance < limit)
		{
			cout << "超出透支限额";
			
		}
		else if (balance >= limit)
		{
			cout << "余额：" << balance;
		}
		return 0;
	}
	string tostring()const
	{
	    return to_string(number), to_string(balane);
	}
};
class saving :public Acount
{
private:
	int limit = 0;
	float balance;
	string id;
	Day date;
	int number;
	float balane;
	float rate;
public:
	saving(int nummber, float balanes, int y, int m, int d) :number(nummber), balane(balanes), rate(0.03)
	{
		Day temp(y, m, d);
		date = temp;
	}
	float check(int jian, int years)
	{
		balance = balane - jian + years * rate*balane;
		if (balance < limit)
		{
			cout << "透支,无法完成";
		}
		else if (balance >= limit)
		{
			cout << "余额：" << balance;
		}
		return 0;
	}
	string tostring()const
	{
		return to_string(number), to_string(balane);
	}
};

int main()
{
	int number;
	float balane;
	int y;
	int m;
	int d;
	cout << "请输入你的id"<<endl;
	cin >> number;
	cout << "你的余额";
	cin >> balane;
	cout << "请输入存钱的时间"<<endl;
	cin >> y; cin >> m; cin >> d;
	Acount zh(number, balane, y, m, d);
	int year;
	SYSTEMTIME time;
    GetLocalTime(&time);
	year = time.wYear - y;
	cout << "请选择账户的功能，1-支票，2-储蓄"<<endl;
	int moshi; cin >> moshi;
	switch (moshi) {
	case 1: {cout << "请输入取款金额"<<endl;
		int qukuan;
		cin >> qukuan;
		checking zp(number, balane, y, m, d);
		zp.check(qukuan, year); }
			break;
	case 2: {cout << "请输入取款金额"<<endl;
		int qukuan2;
		cin >> qukuan2;
		saving cx(number, balane, y, m, d);
		cx.check(qukuan2, year);
		break; }
	}
}
