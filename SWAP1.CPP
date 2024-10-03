#include<iostream.h>
#include<conio.h>
#include<string.h>
class A
{
	public:
		void swap(int a,int b)
		{
			a=a+b;
			b=a-b;
			a=a-b;
		}
		void display(int a, int b)
		{
			cout<< a;
			cout<< b;
		}

};
int A::a;
int A::b;
void main()
{
	clrscr();
	cout<<"\n Enter value";
	cin>>a;
	cout<<"\n Enter value";
	cin>>b;
	swap(a,b);
	cout<<a;b;
	A x,y,z;
	x.display();
	y.display();
	z.display();
	getch();
}
