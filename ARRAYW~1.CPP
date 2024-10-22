#include<conio.h>
#include<iostream.h>
const int size=5;
class student
{
	int roll_no;
	int marks[size];
	public:
		void getdata();
		void tot_marks();
		void display();
};
void student::getdata()
{
	cout<<"\n Enter roll no=";
	cin>> roll_no;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter marks in subject"<<(i+1)<<"=";
		cin>>marks[i];
	}
}
void student::tot_marks()
{
	int total=0;
	for(int i=0;i<size;i++)
		total+=marks[i];
	cout<<"\n \n Total marks:"<< total;
}
void student::display()
		{
			cout<<"\n Roll no="<<roll_no;
			for(int i=0;i<size;i++)
				cout<<"\n subject marks="<<marks[i];
		}
void main()
{
	student stu;
	clrscr();
	stu.getdata();
	stu.display();
	stu.tot_marks();
	getch();
}