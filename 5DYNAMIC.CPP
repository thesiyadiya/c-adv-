#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class string
{
	char *name;
	int length;
	public:
		string()//defalut cinstructor
		{
			length=0;
			name=new char[length+1];
		}
		string(char *s)
		{
			length=strlen(s);
			name=new char[length+1];
			strcpy(name,s);
		}
		void join(string &a,string &b);
		void disp()
		{
			cout<<"\n Name="<<name;
		}
};
void string::join(string &a,string &b)
{
	length=a.length+b.length;
	name=new char[length+1];
	strcpy(name,a.name);
	strcat(name,b.name);
}
void main()
{
	clrscr();
	string s;
	string s1("thesiya"),s2("diya");
	s.join(s1,s2);
	s1.disp();
	s2.disp();
	s.disp();
	getch();
}

