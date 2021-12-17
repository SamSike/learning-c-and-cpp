#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a=4,b=4;
	b=b+(--a,b*2);
	cout<<b;
	getch();
}