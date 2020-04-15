#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
int random1()
{
	int x;
	srand((unsigned)time(NULL));
	x=rand()%3+1;
	return x;
}
int random2()
{
	int y;
	srand((unsigned)time(NULL));
	y=rand()%2+1;
	return y;
}
int ecg=0;int ecbl=0;int ecbr=0;int fcbl=0;int fcg=0;int fcbr=0;int fll=0;int fls=0;
class cat
{
	private:
		string eyecolor,furcolor,furlength;
	public:
		cat();
		string Eye();
		string Furcolor();
		string Furlength();
 };
 cat::cat() {}
 string cat::Eye() 
 {switch(random1())
   {case 1:eyecolor={"green"};ecg++;break;
 	case 2:eyecolor={"blue"};ecbl++;break;
 	case 3:eyecolor={"brown"};ecbr++;break;}
	return eyecolor;}
 string cat::Furcolor() 
 {switch(random1())
   {case 1:furcolor={"black"};fcbl++;break;
	case 2:furcolor={"gray"};fcg++;break;
 	case 3:furcolor={"brown"};fcbr++;break;}
	return furcolor;}
 string cat::Furlength() 
 {switch(random2())
   {case 1:furlength={"long"};fll++;break;
 	case 2:furlength={"short"};fls++;break;}
	return furlength;}
 class cage
 {
 	
 }; 
  int main()
  {
  	cat A=cat();
  	A.Eye();A.Furcolor();A.Furlength();
  	while(cin.get())
	cout<<"cat with "<<A.Eye()<<" eyes and "<<A.Furcolor()<<" "<<A.Furlength()<<" fur.";
	return 0;
  }
