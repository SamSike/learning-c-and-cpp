#include<iostream.h>
#include<conio.h>

class counter
{
private:
	unsigned int count,count2;
public:
	counter()
	{count=0,count2=10;}
	int get_count()
	{return count;}
	int get_count2()
	{return count2;}
	void operator ++ ()
	{count++,count2++;}
};

void main()
{
	clrscr();
	counter c1,c2;
	cout<<"\nc1 = "<<c1.get_count()<<"\t"<<c1.get_count2();
	cout<<"\nc2 = "<<c2.get_count()<<"\t"<<c2.get_count2();
	c1++;
	c2++;
	++c2;
	cout<<"\nc1 = "<<c1.get_count()<<"\t"<<c1.get_count2();
	cout<<"\nc2 = "<<c2.get_count()<<"\t"<<c2.get_count2();
	getch();
}