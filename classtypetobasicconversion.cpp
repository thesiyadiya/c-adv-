#include<iostream.h>
#include<conio.h>
class A
{
float a, b;
public:
A(float x, float y)
{ a = x; b = y;
}
void display()
{
cout<<"\n a ="<<a<<"\n b ="<<b;
}
operator float()
{ return(a+b); }
};
void main()
{
clrscr();
A x(10,20);
x.display();
float y = x; // Convert class A type into float. // float y = x.operator float();
cout<<"\n Sum ="<<y;
getch();
}