#include<iostream.h>
#include<conio.h>
class xyz
{
	public:
	~xyz();
};

void main()
{
	clrscr();
	xyz a,c,d;
	cout<<"Enter val : ";
	int b;
	cin>>b;
	cout<<b+5;
	getch();
}

xyz::~xyz()
{
	cout<<"\nDestructor";
}