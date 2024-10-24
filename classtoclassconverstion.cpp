#include<iostream.h>
#include<conio.h>
class Invent2; // Destination class forward declaration
class Invent1
{
int code, items;
float price;
public:
Invent1(int a, int b, float c)
{
code = a; items = b ;
price = c;
}
void Display()
{
cout<<"\n Code ="<<code<<"\t Items ="<<items<<"\t Price="<<price;
}
int getCode() { return code; }
int getItems() { return items; }
int getPrice() { return price; }
operator float() { return (items*price); }
/* operator Invent2()
{
Invent2 temp;
temp.code = code;
temp.value = price*items;
return temp;
}*/
};
class Invent2
{
int code;
float value;
public:
Invent2()
{
code = 0;
}
Invent2(int x, float y)
{
code = x; value = y;
}
void Display()
{
cout<<"\n code ="<<code<<"\t value="<<value;
}
Invent2(Invent1 p)
{
code = p.getCode();
value = p.getPrice() *p.getItems();
}
};
void main()
{
clrscr();
Invent1 s1(100, 5, 140.0);
Invent2 d1;
float total_value;
total_value = s1;
d1 = s1;
cout<<"\n Product Details- Invent 1 Type";
s1.Display();
cout<<"\n Product Details- Invent 2 Type";
d1.Display();
cout<<"\n Stock value="<<total_value;
getch();
}