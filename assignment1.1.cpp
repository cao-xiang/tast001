#include <iostream>
#include <string>
using namespace std;
int one(string SchoolName,string ClassName);
int two(int StudentNumber,string StudentName); 
int main()
{
	string SchoolName[100];
	string ClassName[100];
	int StudentNumber[100];
	string StudentName[100];
	cout<<"Enter the students'school name ,class name,student number and their name.\n"
	    <<"input:"; 
	one(SchoolName[100],ClassName[100]);
	two(StudentNumber[100],StudentName[100]);
	return 0;
 } 
 int one(string SchoolName,string ClassName)
 { 
    int i;
    for(i=0;;i++)
    {
        cin>>SchoolName>>ClassName;	
		cout<<SchoolName<<"/"<<ClassName<<endl;
	}
    return 0; 
 }
 int two(int StudentNumber,string StudentName)
 {
 	int j;
    for(j=0;;j++)
    {
        cin>>StudentNumber>>StudentName;	
		cout<<StudentNumber<<"/"<<StudentName<<endl;
	}
    return 0; 
 }

