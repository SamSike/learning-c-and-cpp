#include<iostream.h>
#include<conio.h>

class x
{
 protected:
	void n()
	{
		cout<<"Hello world";
	}
};

class y:public x
{
 public:
  /*	void n()
	{
	      //	m();
	      cout<<"testing";
	}     */
};
void main()
{
	clrscr();
	y a;
	a.n();
	getch();
}