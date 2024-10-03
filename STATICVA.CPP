#include<iostream.h>
#include<conio.h>
class A
{
	static int a;
	static int b;
	public:
		void display()
		{
			cout<<"\n a="<<a++;
			cout<<"\t b="<<b++;
		}
};
int A::a;
int A::b;
int main()
{
	clrscr();
	A x,y,z;
	x.display();
	y.display();
	z.display();
	getch();
	return 0;
}
