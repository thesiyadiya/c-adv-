#include<iostream.h>
#include<conio.h>
class A
{
	public:
	A()
	{
		cout<<"\n object created";
	}
	~A()
	{
		cout<<"\n object destroed";
	}
};
void main()
{
	clrscr();
	A a1;
	A a2;
	{
		A a3;
	}
	A a4;
	{
		A a5;
	}
	A a6;
	getch();
}