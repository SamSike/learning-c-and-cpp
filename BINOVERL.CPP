#include<iostream.h>
#include<conio.h>

class distance
{
private:
	int feet;
	float inches;
public:
	distance()
	{
		feet=0;
		inches=0.0;
	}
	distance(int ft, float in)
	{
		feet=ft;
		inches=in;
	}
	void getdist()
	{
		cout<<"\nEnter feet : ";
		cin>>feet;
		cout<<"Enter inches : ";
		cin>>inches;
	}
	void showdist()
	{
		cout<<feet<<"\'- "<<inches<<"\"";
	}
	distance operator + (distance);
};
distance distance::operator + (distance d2)
{
	int f=feet+d2.feet;
	float i=inches+d2.inches;
	if(i>=12.0)
	{
		i-=12.0;
		f++;
	}
	return distance(f,i);
}

void main()
{
	clrscr();
	distance dist1,dist2(11,6.25),dist3,dist4;
	dist1.getdist();
	dist3=dist1+dist2;
	dist4=dist1+dist2+dist3;
	cout<<"\ndist1 = ";
	dist1.showdist();
	cout<<"\ndist2 = ";
	dist2.showdist();
	cout<<"\ndist3 = ";
	dist3.showdist();
	cout<<"\ndist4 = ";
	dist4.showdist();
	getch();
}