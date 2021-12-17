#include<boss.h>
void add(int a,int b)
{
	b*=a+=b;
	cout<<a<<","<<b<<endl;
}
void main()
{
	clrscr();
	int a=5,b=8;
	void add(int,int);
	add(a,b);
	cout<<a<<","<<b<<endl;
	getch();
}