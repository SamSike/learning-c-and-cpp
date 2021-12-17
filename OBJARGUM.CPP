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
	distance add_dist(distance);
};
distance distance::add_dist(distance d2)
{
distance temp;
temp.inches=inches+d2.inches;
if(temp.inches>=12.0)
{
	temp.inches-=12.0;
	temp.feet=1;
}
temp.feet+=feet+d2.feet;
return temp;
}

void main()
{
	clrscr();
	distance dist1,dist3,dist2(11,6.25);
	dist1.getdist();
	dist3=dist1.add_dist(dist2);
	cout<<"\ndist1 = ";
	dist1.showdist();
	cout<<"\ndist2 = ";
	dist2.showdist();
	cout<<"\ndist3 = ";
	dist3.showdist();
	getch();
}