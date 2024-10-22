#include<iostream.h>
#include<conio.h>
class A
{
	int m,n;
	public:
		A()
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
	A x;
	clrscr();
	x.disp();
	getch();
}