#include<iostream.h>
#include<conio.h>
class DB;
class DM
{
	int m,cm;
	public:
		void get()
		{
			cout<<"Enter m and cm:";
			cin>>m>>cm;
		}
		void put()
		{
			cout<<"\n m="<<"\t cm="<<cm;
		}
		friend DM add(DM dm,DB db);
		friend DB add1(DM dm,DB db);
};
class DB
{
	int f,i;
	public:
		void get()
		{
			cout<<"Enter feet and inches:";
			cin>>f>>i;
		}
		void put()
		{
			cout<<"\n f="<<f<<"\t i="<<i;
		}
		friend DM add(DM dm,DB db);
		friend DB a
		dd1
