#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
		void getA();
		void putA();
};
void A::getA()
{
	cout<<"enter a:";
	cin>>a;
}
void A::putA()
{
	cout<<"\n a="<<a;
}
class B:virtual public A
{
	int B;
	public:
		void getB();
		void putB();
};
void B::getB()
{
	cout<<"enter b:";
	cin>>B;
}
void B::putB()
{
	cout<<"\n b="<<B;
}
class C:public virtual A
{
	int C;
	public:
		void getC();
		void putC();
};
void C::getC()
{
	cout<<"enter C:";
	cin>>C;
}
void C::putC()
{
	cout<<"\n c="<<C;
}
class D:public B,public C
{
	int D;
	public:
		void getD();
		void putD();
};
void D::getD()
{
	cout<<"enter d:";
	cin>>D;
}
void D::putD()
{
	cout<<"\n d="<<D;

}
void main()
{
	clrscr();
	D x;
	x.getA();
	x.getB();
	x.getC();
	x.getD();
	x.putA();
	x.putB();
	x.putC();
	x.putD();
	getch();
}