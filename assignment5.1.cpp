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
	cout<<"�˺ţ�"<<an<<"\n"<<"�˻���"<<ba<<"\n"<<"�����ʣ�"<<annualinterestrate<<"\n"<<"ʱ��:"<<datecreated<<endl;
 } 
 int Account::tostring()
{
	char an[10];char ba[10];
	itoa(accountnumber,an,10);
	itoa(balane,ba,10);
	cout<<"�˺ţ�"<<an<<"\n"<<"�˻���"<<ba<<endl;
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
	    		cout << "͸֧�����޶����޷�ȡ� "<<endl;exit(0);
	    	}
	    }   	
 	    string toString()
 	    {
	    	int c=get();	
			char an[10];char ba[10];
        	itoa(accountnumber,an,10);
        	itoa(c,ba,10);
	        cout<<"�˺ţ�"<<an<<"\n"<<"�˻���"<<ba<<endl;
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
	    		cout << "���㣬�޷�ȡ� "<<endl;exit(0);
	    	}
	    } 
		string toString()
		{
	    	int c=get();	
			char an[10];char ba[10];
        	itoa(accountnumber,an,10);
        	itoa(c,ba,10);
	        cout<<"�˺ţ�"<<an<<"\n"<<"�˻���"<<ba<<endl;
			return an,ba;}	
 };
int main()
{
	int x,y,m;
	Account a0;saving s1;checking c1;
	cout<<"��ѡ���˻������֧Ʊ�˻��밴0�������˻��밴1��"<<endl;
	cin>>x;
	a0.toString();
	cout<<"��ѡ����˻��Ĳ���������밴0��ȡ���밴1��"<<endl;
	cin>>y;
	cout<<"��������:"; 
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
