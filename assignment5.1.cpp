#include <iostream> 
#include <stdlib.h>
#include <string>
using namespace std;
class Account
{
	public:
		Account(int an,int ba,double air,int dc);
		int accountnumber;
		int balane;
		double annualinterestrate; 
		int datecreated;
		int deposit(int);
		int withdraw(int);
		int get();
		int toString();
		int tostring();
 } ; 
 Account::Account(int an=123456,int ba=10000,double air=0.01,int dc=20191113)
{
	this->accountnumber = an;
	this->annualinterestrate = air;
	this->datecreated= dc;
	this->balane = ba;
}
int Account::deposit(int a) 
{
	balane=balane+a;
	return balane;
}
int Account::withdraw(int a) 
{
	balane=balane-a;
	return balane;
}
int Account::get() 
{return balane;}
int Account::toString()
{
	char an[10];char ba[10];
	itoa(accountnumber,an,10);
	itoa(balane,ba,10);
	cout<<"账号："<<an<<"\n"<<"账户余额："<<ba<<"\n"<<"年利率："<<annualinterestrate<<"\n"<<"时间:"<<datecreated<<endl;
 } 
 int Account::tostring()
{
	char an[10];char ba[10];
	itoa(accountnumber,an,10);
	itoa(balane,ba,10);
	cout<<"账号："<<an<<"\n"<<"账户余额："<<ba<<endl;
 }
 class checking:public Account
 {
    public:
   		int limted=1000;
    	int left;
    	checking(int an=123456,int ba=10000,double air=0.01,int dc=20191113):Account(an,ba,air,dc){}
    	int withdraw(int b)
	    {
	    	Account::withdraw(b);
	    	left = get();
	    	if (left < (-limted))
	    	{
	    		cout << "透支金额超过限定，无法取款！ "<<endl;exit(0);
	    	}
	    }   	
 	    string toString()
 	    {
	    	int c=get();	
			char an[10];char ba[10];
        	itoa(accountnumber,an,10);
        	itoa(c,ba,10);
	        cout<<"账号："<<an<<"\n"<<"账户余额："<<ba<<endl;
			return an,ba;}
 };
 class saving:public Account
 {
	public:
		int left;
		saving(int an=123456,int ba=10000,double air=0.01,int dc=20191113):Account(an,ba,air,dc){}
    	int withdraw(int c)
	    {
	    	Account::withdraw(c);
	    	left = get();
	    	if (left <0)
	    	{
	    		cout << "余额不足，无法取款！ "<<endl;exit(0);
	    	}
	    } 
		string toString()
		{
	    	int c=get();	
			char an[10];char ba[10];
        	itoa(accountnumber,an,10);
        	itoa(c,ba,10);
	        cout<<"账号："<<an<<"\n"<<"账户余额："<<ba<<endl;
			return an,ba;}	
 };
int main()
{
	int x,y,m;
	Account a0;saving s1;checking c1;
	cout<<"请选择账户的类别（支票账户请按0，储蓄账户请按1）"<<endl;
	cin>>x;
	a0.toString();
	cout<<"请选择对账户的操作（存款请按0，取款请按1）"<<endl;
	cin>>y;
	cout<<"请输入金额:"; 
	cin>>m;
	switch(x)
	{
		case 0:{
			switch(y){
					case 0:{a0.deposit(m);a0.tostring();break;}
		            case 1:{a0.withdraw(m);c1.withdraw(m);c1.toString();break;}}break;}
		case 1:{		
    		switch(y){
					case 0:{a0.deposit(m);a0.tostring();break;}
		            case 1:{a0.withdraw(m);s1.withdraw(m);s1.toString();break;}}break;}
	}
}
