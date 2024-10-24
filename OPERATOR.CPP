#include<conio.h>
#include<iostream.h>
class A
{
	int a,b;
	public:
		A(int x, int y)
		{
			a=x;
			b=y;
		}
		void put()
		{

			cout<<"\n a="<<a;
			cout<<"\n b="<<b;
		}
		void operator -();
};
void A::operator-()
{
	a= -a;
	b= -b;
}
void main()
{
	A x(10, -20);
	clrscr();
	cout<<"\n Before calling -x():";
	x.put();
	-x;
	cout<<"\n after calling -x():";
	x.put();
	getch();
}
