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
			cout<<"账号："<<id<<"     "<<"姓名："<<name<<endl; 
		}
 };
class teacher: virtual public people
{
	public:
	    teacher(int id,string name):people(id,name){};
	    int workinghour;int salary;
	    void Salary (int workinghour)
		{
			cout<<"工作时间："<<workinghour<<"学时"<<endl;
			salary=50*workinghour+4500;
			cout<<"工资："<<"$"<<salary<<endl;
		 } 
};
class student: virtual public people
{
	public:
		student(int id,string name):people(id,name){};
		int studyinghour;string courses;
		void Class(string courses,int studyinghour)
		{
			cout<<"课程名称："<<courses<<"\n"<<"学时："<<studyinghour<<endl;
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
			cout<<"工作时间："<<workinghour<<"学时"<<endl;
			salary=35*workinghour;
			cout<<"工资："<<"$"<<salary<<endl;
			return 0;
		}
}; 
int main()
{
	cout<<"老师："<<endl; 
	teacher a0(180405110,"孙XX"); 
	a0.Salary(10);
	cout<<"学生："<<endl;
	student a1(180405102,"李XX");
	a1.Class("身体素质",5);
	cout<<"助理："<<endl;
	TeacherAssistant a2(180405101,"王XX");
	a2.Class("健美操",5);a2.Salary(10);    
}
