#include <iostream>
#include <string>
using namespace std;
class people
{
protected:
	string no;
	string name;
	int age;
	bool gender;
	string department;
	void input()
	{
		cout << "���:";
		cin >> this->no;
		cout << "����:";
		cin >> this->name;
		cout << "����:";
		cin >> this->age;
		cout << "��/Ů"<<endl;
		string g;
		cin >> g;
		if (g == "��")
			this->gender = true;
		else
			this->gender = false;
		cout << "����:";
		cin >> this->department;
	}
public:
	virtual void print() = 0;
};
void people::print()
{
	cout << "��ţ�" << this->no << endl;
	cout << "������" << this->name << endl;
	cout << "���䣺" << this->age << endl;
	cout << "���ң�" << this->department << endl;
	cout << "��/Ů" << endl;
	if (this->gender)
		cout << "��" << endl;
	else
		cout << "Ů" << endl;
}
class doctor : public people
{
private:
	string title;
public:
	void onDuty()
	{
		input();
		cout << "ְ�ƣ�"<<endl;
		cin >> this->title;
	}
	void Diagnose(string i, string& t)
	{
		cout << "���Ʒ���:";
		cin >> t;
	}
	virtual void print()
	{
		people::print();
		cout << "ְ��:" << this->title << endl;
	}
};
class patients : public people
{
private:
	string illness;
	string treatment;

public:
	virtual void print()
	{
		people::print();
		cout << "���齲����" << this->illness << endl;
		cout << "���Ʒ�����" << this->treatment << endl;
	}
	void SeeDoctor(doctor& d)
	{
		cout << "���齲����";
		cin >> this->illness;
		d.Diagnose(this->illness, this->treatment);
	}
	void Register()
	{
		input();
	}
};
int main()
{
	cout << "������Ϣ��" << endl;
	patients p;
	p.Register();
	cout << "ҽ����Ϣ��" << endl;
	doctor d;
	d.onDuty();
	cout << "���ƹ��̣�" << endl;
	p.SeeDoctor(d);
	cout << "������Ϣ&�������飺" << endl;
	p.print();
	cout << "ҽ����Ϣ��" << endl;
	d.print();
}
