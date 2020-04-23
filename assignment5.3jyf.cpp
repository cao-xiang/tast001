#include <iostream>
#include <string>
using namespace std;
class Account
{
public :
	Account(string str, int l,string d,double r):accountnumber(str),balance(l),date(d),rate(r){}//初始化

	int deposit(int a)
	{
		balance =balance+ a;
		return balance;
}
	int withdraw(int a)
	{
		balance = balance - a;
		return balance;
	}
	int get()
	{
		return balance;
	}
	void print()
	{
		cout << balance;
	}
	string getstring()
	{
		return accountnumber;
	}
	int tostring()
	{

	}
	
private :
	string accountnumber;//账户
	int balance;//余额
	string date;//创建日期
	double rate;//利率
};
class checking :public Account
{   public:
	int limted;
	int left;
	int b;
	checking(string str, int l, string d, double r,int a):Account(str,l,d,r),limted(a){}//初始化
	void withdraw(int b)
	{
		Account::withdraw(b);
		left = get();
		if(left<(-limted))
		{
			cout << "beyond limted ,not allowed to take ";
		}
	}
	string tostring()
	{
		int b = get();
		string str1 = getstring();
		string a = "  ";
		string str2 = to_string(b);
		string str3 = str1 + a;
		string str4 = str3 + str2;
		return str4;
	}
};
class saving :public Account
{
public:
	int limted;
	int left;
	int b;
	saving (string str, int l, string d, double r) :Account(str, l, d, r) {}//初始化
	void withdraw(int b)
	{
		Account::withdraw(b);
		left = get();
		if (left < 0)
		{
			cout << "you are not allowed to overdraw ";
		}
	}
	string tostring()
	{
		int b = get();
		string str1 = getstring();
		string a = "-";
		string str2 = string(b);
		string str3 = str1 + a;
		string str4 = str3 + str2;
		return str4;
	}

};

int main()
{
	checking a("123456", 2000, "20191212", 0.1, 1500);
	a.withdraw(3800);
	cout << endl;
	a.tostring();
	//a.print();
	cout << endl;
	saving b("123456", 2000, "20191212", 0.1);
	b.withdraw(2100);
	//b.tostring;
}
