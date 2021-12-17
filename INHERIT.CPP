#include<iostream.h>
#include<conio.h>
class xyz
{
	protected:
	 a();
};

class x:xyz
{
	public:
	int random;
	void myfun()
	{
		a();
	}
};

void main()
{
	clrscr();
	x b;
	b.myfun();
	getch();
}

xyz::a()
{
	cout<<"Hello xyz\n";
}