#include<conio.h>
#include<iostream.h>
void main()
{
	int i,j,k,n;
	clrscr();
	for(i=1;i<=4;i++)
	{
		for(k=4;k>=i;k--)
		{
			cout<<"  ";
		}
		for(j=i;j>=1;j--)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
	getch();
}