#include <iostream>
#include <string>
using namespace std;
class people
{
	public:
		int ID;string name;
		people(int id,string name)
		{
			this->ID =id;
			this->name =name;
			cout<<"�˺ţ�"<<id<<"     "<<"������"<<name<<endl; 
		}
 };
class teacher: virtual public people
{
	public:
	    teacher(int id,string name):people(id,name){};
	    int workinghour;int salary;
	    void Salary (int workinghour)
		{
			cout<<"����ʱ�䣺"<<workinghour<<"ѧʱ"<<endl;
			salary=50*workinghour+4500;
			cout<<"���ʣ�"<<"$"<<salary<<endl;
		 } 
};
class student: virtual public people
{
	public:
		student(int id,string name):people(id,name){};
		int studyinghour;string courses;
		void Class(string courses,int studyinghour)
		{
			cout<<"�γ����ƣ�"<<courses<<"\n"<<"ѧʱ��"<<studyinghour<<endl;
		 } 
};
class TeacherAssistant:public teacher,public student
{
	public:
		TeacherAssistant(int id,string name):people(id,name),teacher(id,name),student(id,name){};
		int workinghour,studyinghour,salary;
		string courses;
		void Class(string courses,int studyinghour)
		{student::Class(courses,studyinghour);} 
		int Salary(int workinghour)
		{
			cout<<"����ʱ�䣺"<<workinghour<<"ѧʱ"<<endl;
			salary=35*workinghour;
			cout<<"���ʣ�"<<"$"<<salary<<endl;
			return 0;
		}
}; 
int main()
{
	cout<<"��ʦ��"<<endl; 
	teacher a0(180405110,"��XX"); 
	a0.Salary(10);
	cout<<"ѧ����"<<endl;
	student a1(180405102,"��XX");
	a1.Class("��������",5);
	cout<<"����"<<endl;
	TeacherAssistant a2(180405101,"��XX");
	a2.Class("������",5);a2.Salary(10);    
}
