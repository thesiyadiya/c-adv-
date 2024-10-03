#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	float amt=0,v=0;
	int ch=0;
	clrscr();
	cout<<"\n Enter your opening Amount:";
	cin>>amt;
	while(ch!=999)
	{
		cout<<"\n 1.crd(+)";
		cout<<"\n 2.Dbt(-)";
		cout<<"\n 3.show amount";
		cout<<"\n 0.Exit";
		cout<<"\n Select your option:";
		cin>>ch;
		switch(ch)
	{
		case 0:
			exit(0);
			break;

		case 1:
			cout<<"\n Enter Amount for CRD";
			cin>>v;
			amt=amt+v;
			break;
		case 2:
			cout<<"\n Enter Amount for DBT:";
			cin>>v;
			amt=amt-v;
			break;
		case 3:
			cout<<"\n Amount:"<<amt;
			break;
		default:
			cout<<"\n Not valid";
			break;
		}
			getch();
	}
	getch();
}