#include<boss.h>
void main()
{
	clrscr();
	int a,b;
	cout<<"Enter values : ";
	cin>>a>>b;
	void sum(int,int);
	sum(a,b);
	getch();
}
void sum(int c,int d)
{
	int s=c+d;
	cout<<s;
}