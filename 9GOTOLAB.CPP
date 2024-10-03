#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int a;
	clrscr();
	a=1;
	goto l1;
	l1:
	if(a<=10)
	{
		cout<<"\n DIYA";
		a++;
		goto l1;
	}
	getch();
}