#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
		void get()
		{
			cout<<"Enter a:";
			cin>>a;
		}
		void put()
		{
			cout<<"\n a="<<a;
		}
		friend A sum(A x, A y);
};
A sum (A x, A y)
{
	A z;
	z.a=x.a+y.a;
	return z;
}
int main()
{
	A x,y,z;
	clrscr();
	x.get();
	y.get();
	z=sum(x,y);
	cout<<"\n object x";
	x.put();
	cout<<"\n object y";
	y.put();
	cout<<"\n object z";
	z.put();
	getch();
	return 0;
}







