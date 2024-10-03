#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int a,c=8;
	clrscr();
	a=1;
	goto l1;
	l1:
	if(a<=10)
	{
		printf("\n %d *%d=%d",c,a,c*a);
		a++;
		goto l1;
	}
	getch();
}