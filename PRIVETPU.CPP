#include<iostream.h>
#include<conio.h>
class A
{
	void show()
	{
		cout<<"\n Show";
	}
	public:
	void display()
	{
		cout<<"\n Display";
		show();
	}
};
void main()
{
	clrscr();

	A x;
	x.display();
	getch();
}