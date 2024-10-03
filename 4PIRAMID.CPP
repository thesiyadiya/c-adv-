#include<iostream.h>
#include<conio.h>
void main()
{
	int i,j,k,n;
	clrscr();
	for(i=4;i>=1;i--)
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



