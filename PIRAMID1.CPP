#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=4;i>=1;i--)
	{
		for(k=1;;k=i-1;k++)
		{
			cout<<"  ";
		}
		for(j=i;j<=4;j++)
		{
			cout<<j<<" ";
		}
		for(j=3;j>=i;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}