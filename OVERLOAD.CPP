#include<iostream.h>
#include<conio.h>

class abc
{
	public:

		int a;
		abc(int b)
		{
			cout<<b+5<<endl;
		}
		abc()
		{
			cout<<"One";
		}
};
void main()
{
	clrscr();
	//abc x;
	abc x(50);
	x.a=5;
	cout<<x.a<<endl;
	getch();
}