#include<iostream.h>
#include<conio.h>
class A
{
	int A;
	public:
		void getA();
		void putA();
};
void A::getA()
{
	cout<<"Enter a:";
	cin>>A;
}
void A::putA()
{
	cout<<"\n a="<<A;
}
class B
{
	int B;
	public:
		void getB();
		void putB();
};
void B::getB()
{
	cout<<"Enter b:";
	cin>>B;
}
void B::putB()
{
	cout<<"\n b="<<B;
}
class C:public A,public B
{
	int C;
	public:
		void getC();
		void putC();
};
void C::getC()
{
	cout<<"Enter c:";
	cin>>C;
}
void C::putC()
{
	cout<<"\n c="<<C;
}
void main()
{
	clrscr();
	C x;
	x.getA();
	x.getB();
	x.getC();
	x.putA();
	x.putB();
	x.putC();
	getch();
}
