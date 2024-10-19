#include<iostream.h>
#include<conio.h>
int strlen1(const char *s);
void main()
{
	char *s;
	int l;
	clrscr();
	cout<<"Enter a string:";
	cin>>s;
	l=strlen1(s);
	cout<<"\n Length="<<l;
	getch();
}
int strlen1(const char *s)
{
	int i;
	for(i=0;s[i]!='\0';i++)
	return i;
}
