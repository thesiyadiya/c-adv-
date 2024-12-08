#include<iostream.h>
#include<conio.h>
class Employee
{
	int id;
	char name[50];
	public:
		void getdata()
	       {
		cout<<"\n \t emter Empolyee id:";
		cin>>id;
		cout<<"\n \t Enter Employee name:";
		cin>>name;
	       }
	       void putdata()
	       {
			cout<<"\n"<<id<<"\t"<<name;
	       }
};
void main()
{
	int i;Employee E[3];
	clrscr();
	for(i=0;i<3;i++)
	{
		cout<<"\n Enter details of"<<i+1<<"employee";
		E[i].getdata();
	}
	cout<<"\n Details of Employee";
	for(i=0;i<3;i++)
	E[i].putdata();
	getch();
}