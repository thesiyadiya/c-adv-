#include<iostream.h>
#include<conio.h>
class student
{
	int rno;
	char name[50];
	double fee;
	public:
		student()//constructor
		{
			cout<<"Enter the Roll NO:";
			cin>>rno;
			cout<<"Enter the Name:";
			cin>>name;
			cout<<"Enter the fee:";
			cin>>fee;
		}
		void display()
		{
			cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
		}
};
void main()
{
	student s;
	clrscr();
	s.display();
	getch();
}
