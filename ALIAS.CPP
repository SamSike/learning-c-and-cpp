#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	void add(int a,int b=50);
	add(100);
	add(15,80);
	getch();
}
void add(int a,int b)
{
	int s=a+b;
	cout<<s<<endl;
}