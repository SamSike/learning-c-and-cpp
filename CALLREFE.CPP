#include<iostream.h>
#include<conio.h>
void add(int &a,int&b)
{
	a+=b;
	b*=a;
	cout<<a<<","<<b<<endl;
}
void main()
{
	clrscr();
	int x=5,y=8;
	void add(int &,int &);
	add(x,y);
	cout<<x<<","<<y<<endl;
	getch();
}