#include<iostream.h>
#include<conio.h>
class A
{
	int m,n;
	public:
	A()//Defalut constrctor
	{
		cout<<"\n Defalut constructor";
		m=0;
		n=0;
	}
	A(int x, int y)
	{
		cout<<"\n parameterized constructor";
		m=x;
		n=y;
	}
	void display()
	{
		cout<<"\n m="<<m;
		cout<<"\n n="<<n;
	}
};
void main()
{
	clrscr();
	A x;
	A y(100,200);
	x.display();
	y.display();
	getch();
}
