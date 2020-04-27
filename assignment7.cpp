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
		cout << "编号:";
		cin >> this->no;
		cout << "姓名:";
		cin >> this->name;
		cout << "年龄:";
		cin >> this->age;
		cout << "男/女"<<endl;
		string g;
		cin >> g;
		if (g == "男")
			this->gender = true;
		else
			this->gender = false;
		cout << "科室:";
		cin >> this->department;
	}
public:
	virtual void print() = 0;
};
void people::print()
{
	cout << "编号：" << this->no << endl;
	cout << "姓名：" << this->name << endl;
	cout << "年龄：" << this->age << endl;
	cout << "科室：" << this->department << endl;
	cout << "男/女" << endl;
	if (this->gender)
		cout << "男" << endl;
	else
		cout << "女" << endl;
}
class doctor : public people
{
private:
	string title;
public:
	void onDuty()
	{
		input();
		cout << "职称："<<endl;
		cin >> this->title;
	}
	void Diagnose(string i, string& t)
	{
		cout << "治疗方案:";
		cin >> t;
	}
	virtual void print()
	{
		people::print();
		cout << "职称:" << this->title << endl;
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
		cout << "病情讲述：" << this->illness << endl;
		cout << "治疗方案：" << this->treatment << endl;
	}
	void SeeDoctor(doctor& d)
	{
		cout << "病情讲述：";
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
	cout << "患者信息：" << endl;
	patients p;
	p.Register();
	cout << "医生信息：" << endl;
	doctor d;
	d.onDuty();
	cout << "治疗过程：" << endl;
	p.SeeDoctor(d);
	cout << "患者信息&治疗详情：" << endl;
	p.print();
	cout << "医生信息：" << endl;
	d.print();
}
