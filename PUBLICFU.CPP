#include<iostream.h>
#include<conio.h>
class A
{
	public:
		void show()
		{
			cout<<"\n Show";
		}
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