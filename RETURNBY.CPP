#include<iostream.h>
#include<conio.h>
int & max(int &, int &);
void main()
{
	clrscr();
	int a=1,b=2,c,x=10,y=20,z=30;
	c=max(a,b);
	cout<<"\n max value: "<<c;
	max(x,y)=z;
	cout<<"\n x="<<x<<"\ny="<<y<<"\nz="<<z;
	getch();
}
int & max(int &x ,int &y)
{
	int z=x;
	x=y;
	y=z;
}