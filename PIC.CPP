#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class PIC
{
	public:
	int Pno;
	char Category[30],Location[50];
	void FixLocation()
	{
		if(strcmp(Category,"Classic")==0)
			strcpy(Location,"Amina");
	}
};
void main()
{
	clrscr();
	PIC p;
	gets(p.Category);
	p.FixLocation();
	cout<<p.Location;
	getch();
}