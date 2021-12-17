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
	counter operator ++ ()
	{
		count++;
		counter temp;
		temp.count=count;
		return temp;
	}
};

void main()
{
	clrscr();
	counter c1,c2;
	cout<<"\nc1 = "<<c1.get_count();
	cout<<"\nc2 = "<<c2.get_count();
	c1++;
	c2=c1++;
	cout<<"\nc1 = "<<c1.get_count();
	cout<<"\nc2 = "<<c2++.get_count();
	getch();
}