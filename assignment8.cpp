#include <iostream>
using namespace std;
class Decimal
{
	public:
		double d;
		Decimal(double d)
		{
			this->d =d;
		}
		friend Decimal operator<=(Decimal a,Decimal b);
		friend ostream& operator<<(ostream& cout,Decimal& x);
};
Decimal operator<=(Decimal a,Decimal b)
{
	b.d <=a.d ;return b;
}
ostream& operator<<(ostream& cout,Decimal& x)
{
	cout<<x.d;
	return cout;
}
int main()
{
	Decimal d1(3.4),d2(1.2);
	if(d2<=d1)
		cout<<d2<<"is small number"<<endl;
	return 0;
}
