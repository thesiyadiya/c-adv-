#include<iostream.h>
#include<conio.h>
int add(int no1,int no2);
int add(int no1,int no2,int no3);
void main()
{
	int a=10,b=5,c=5,ans;
	clrscr();
	ans=add(a,b,c);
	cout<<"\n Addition is:"<<ans;
	getch();
}
int add(int no1, int no2)
{
	cout<<"function 1";
	return(no1+no2);
}
int add(int no1,int no2,int no3)
{
	cout<<"function 2";
	return(no1+no2+no3);
}