#include<iostream.h>
#include<conio.h>
class A
{
	int m,n;
	public:
		A(int x,int y)
		{
			m=x;n=y;
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
	A x(100,200);
	x.disp();
	getch();
}