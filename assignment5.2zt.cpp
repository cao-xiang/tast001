#include <iostream>
#include<string>
#include<Windows.h>
using namespace std;
class Account
{
public:
	Account(string id , int balance, double anrate , string crtime );
	string id;
	int balance;
	double anrate;
	string crtime;
	void deposit( int b);
	void withdraw( int b);
	string tostring()const;
	void prt();
};
Account::Account(string id="a", int balance=1000000, double anrate=0.05, string crtime= "2019 11 13")
{
	this->id = id;
	this->anrate = anrate;
	this->crtime = crtime;
	SYSTEMTIME sys;
	GetLocalTime(&sys);
	cout << sys.wYear << endl;
	int npos = crtime.find(" ");
	string year;
	if (npos != -1)
		year = crtime.substr(0, npos);
	cout << year << endl;
		int eyear = sys.wYear - stoi(year);
		for(int i=0;i<eyear;i++)
		balance =balance + (balance*anrate );
		this->balance = balance;
}
void Account::deposit( int b)
{
	this->balance = this->balance + b;
}

void Account::withdraw( int b)

{
	this->balance = this->balance - b;
}
string Account::tostring()const
{
	return " ";
}
void Account::prt()
{
	cout << id <<" "<< balance << " " << anrate << " " << crtime << " " << endl;
}
class CHAccount:public Account
{
public:
	CHAccount(string id , int balance, double anrate, string crtime );
	string tostring()const;
};
CHAccount::CHAccount(string id = "a", int balance = 1000000, double anrate = 0.05, string crtime = "2000 1 16") :Account(id, balance, anrate, crtime)
{
}
string CHAccount::tostring()const
{
	string zt;
	zt = this->id + to_string(this->balance);
	cout << zt << endl;
	return zt;
}
class CHNGAccount:public Account
{
public:
	CHNGAccount(string id, int balance, double anrate, string crtime);
	void withdraw(int b);
	string tostring()const;
};
CHNGAccount::CHNGAccount(string id = "a", int balance = 1000000, double anrate = 0.05, string crtime = "2000 1 16") :Account(id, balance, anrate, crtime)
{
}
string CHNGAccount::tostring()const
{
	string zt;
	zt = this->id + to_string(this->balance);
	cout << zt << endl;
	return zt;
}
void CHNGAccount::withdraw(int b)
{
	if (this->balance >= b)
		this->balance = this->balance - b;
	else
	{
		cout << "´¢ÐîÕË»§²»ÄÜÍ¸Ö§" << endl;
		return;
	}
}
int main()
{
	cout << "ÕË»§²âÊÔ" << endl;
	Account zt;
	zt.prt();
	zt.deposit(1000);
	zt.prt();
	zt.withdraw(200000);
	zt.prt();
	cout << "-----------------------------------------------------------"<<endl;
	cout << "Í¸Ö§ÕË»§²âÊÔ" << endl;
	CHAccount wx;
	wx.prt();
	wx.withdraw(200000);
	wx.tostring();
	wx.prt();
	cout << "-----------------------------------------------------------"<<endl;
	cout << "´¢ÐîÕË»§²âÊÔ" << endl;
	CHNGAccount sb;
	sb.prt();
	sb.withdraw(200000);
	sb.CHNGAccount::tostring();
	sb.prt();
}
