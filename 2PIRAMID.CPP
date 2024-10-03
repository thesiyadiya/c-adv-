
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=4;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			cout<<j;
		}
		cout<<"\n";
	}
	getch();
}