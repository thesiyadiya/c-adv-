#include<iostream.h>
#include<conio.h>
class A
{
	int a,b;
	public:
		A(A&x)//copy constructor
		{
			a=x.a;
			b=x.b;
		}
		A()//defalut constructor
		{
			a=0;
			b=0;
		}
		A(int x,int y)//parameterize constructor
		{
			a=x;
			b=y;
		}
		void disp()
		{
			cout<<"\n a="<<a;
			cout<<"\n b="<<b;
		}
};
void main()
{
	clrscr();
	A x;//Defalut constructor
	A y(10,20);
	A z=y;
	x.disp();
	y.disp();
	x=z;  //simply assige value of object z to x
	x.disp();
	getch();
}