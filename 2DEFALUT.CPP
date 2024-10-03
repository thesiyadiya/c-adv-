#include<iostream.h>
#include<conio.h>
class A
{
	int m,n;
	public:
	A()//constructor
	{
		m=0;
		n=0;
	}
	void disp()
	{
		cout<<"\n m="<<m;
		cout<<"\n n="<<n;
	}
};
void main()
{
	clrscr();
	A x;
	x.disp();
	getch();
}