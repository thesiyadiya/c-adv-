#include<iostream.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	a=3;
	switch(a)
	{
		case 1:
			cout<<"\n This is one";
			break;
		case 2:
			cout<<"\n This is two";
			break;
		case 3:
			cout<<"\n This is not one or two";
			break;
		default:
			cout<<"\n Not one";
			break;
	}
	getch();
}

