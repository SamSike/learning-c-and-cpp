#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int xyz;
	cout<<"Hello\n";
	cin>>xyz;
	cout<<xyz<<endl;
	xyz=xyz+10;
	cout<<xyz;
	getch();
	if(xyz>20)
	{
		cout<<"Greater than 20";
	}
	else if(xyz>10)
	{
		cout<<"Greater than 10";
	}
	else
	{
		cout<<"None";
	}
	getch();
}