#include<iostream.h>
#include<conio.h>
class xyz
{
	public:
	xyz(int b);
	xyz(char c);
};

class x:xyz
{
	public:
	x(int f);
};

void main()
{
	clrscr();
	int f;
	cout<<"Enter value : ";
	cin>>f;
	x g;
	getch();
}

x::x()
{
	cout<<"Enter value : ";
	int b;
	char c;
	cin>>b;
	cout<<"Enter character : ";
	cin>>c;
      //	xyz d(c);
       //	xyz a(b);
}
/*

xyz::xyz(int b)
{
	cout<<"\nConstructor : ";
	cout<<b+5;
}

xyz::xyz(char c)
{
	cout<<"\nNo. 2 : ";
	c+=5;
	cout<<c;
}