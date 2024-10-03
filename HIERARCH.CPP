#include<conio.h>
#include<iostream.h>
class A
{
	int A;
	public:
		void getA();
		void putA();
};
void A:: getA()
{
	cout<<"Enter a:";
	cin>>A;
}
void A::putA()
{
	cout<<"\n a="<<A;
}
class B:public A
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
	cout<<"\nb="<<B;
}
class C:public A
{
	int C;
	public:
		void getC();
		void putC();
};
void C::getC()
{
	cout<<"Enter C:";
	cin>>C;
}
void C::putC()
{
	cout<<"\n c="<<C;
}
void main()
{
	B x;
	x.getA();
	x.getB();
	x.getC();
	x.putA();
	x.putB();
	x.putC();
	C y;
	y.getA();
	y.getB();
	y.getC();
	y.putA();
	y.putB();
	y.putC();
	getch();
}