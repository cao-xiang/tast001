#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<vector>
using namespace std;
static int ecgreennum = 0;
static int fcblacknum = 0;
static int fllongnum = 0;
static int ecbluenum = 0;
static int fcgraynum = 0;
static int flshortnum = 0;
static int ecbrownnum = 0;
static int fcbrownnum = 0;
int random()
{
	return rand() % 3 + 1;
}
int random2(){
	return rand() % 2 + 1;
}
string eyecolor() 
{
	switch (random())
	{
	case 1:
		ecgreennum++;
		return "green";
	case 2:
		ecbluenum++;
		return "blue";
	case 3: 
		ecbrownnum++;
		return "brown";
	}
}
string furcolor() 
{
	switch (random())
	{
	case 1:
		fcblacknum++;
		return "black";
	case 2:fcgraynum++;
		return "gray";
	case 3:fcbrownnum++;
		return "brown";
	}
}
string furlength() 
{
	switch (random2())
	{
	case 1:fllongnum++;
		return "longth";
	case 2:flshortnum++;
		return "shrot";
		break;
	}
}
class cat
{
public:
	cat();
	void cprint();
	void change();
private:
	string eyeco, furco, furlenth;
};
cat::cat()
{
	eyeco = eyecolor();
	furco = furcolor();
	furlenth = furlength();
}
void cat::cprint() 
{
	cout << furco << "\t" << eyeco << "\t" << furlenth;
}
void cat::change() 
{
	cout << "please enter the change data,thefurcolor,the eye's color,the fur lenth"<< endl;
	cin >> eyeco >> furco >> furlenth;
}
bool cn2(int, int, int);
bool cn3(int, int, int);
bool en2(int, int, int);
class cage
{
public:
	void print();
	void setcat();
	void check();
	void changes();
private:
	vector<cat> c;
	static int count;
};
int cage::count = 0;
void cage::print() 
{
	for (int i = 0; i < count; i++)
	{
		 c[i].cprint();
		 cout << endl;
	}
	}
void cage::changes() 
{
	c[count-1].change();
}
void cage::setcat() 
{
	cat cats;
	count++;
	c.push_back(cats);
}
void cage::check() 
{
	switch (cage::count)
	{
	case 1:cout << "no fight" << endl; break;
	case 2: if (cn2(fcblacknum, fcgraynum,fcbrownnum))
	{
		if (en2(ecgreennum,ecbluenum,ecbrownnum)) 
		{
			cout << "no fight" << endl;
		}
		else
		{
			cout << "fight" << endl;
		}
	}
			else
			{
				cout << "no fight" << endl;
			}break;
	default:if (cn3(fcblacknum, fcgraynum, fcbrownnum))
	{
		cout << "no fight" << endl;
	}
			else
			{
				cout << "fight";
			}
		break;
	}
}
bool cn2(int a,int b,int c)
{
	if (a==c||c==b||b==c)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool cn3(int a, int b, int c) 
{
	if (a==b&&b==c||(a==b && c== 0) || (a==c && b== 0) || (b==c && a== 0)||a==0&&b==0||b==0&&c==0||a==0&&c==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool en2(int a, int b, int c) 
{
	if (a==b&&b==0||a==c&&c==0||b==c&&c==0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main() 
{
	srand((int)time(0));
	cage ca;
	cout << "please enter the 'Enter' to create the cat" << endl;
	cout << "furcolor" <<"	"<< "eyecolor" <<"	"<< "furlength" << endl;
	while (cin.get())
	{
		ca.setcat();
		ca.print();
		ca.check();
	}
	return 0;
	}
