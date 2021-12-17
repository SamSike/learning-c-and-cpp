#include<iostream.h>
#include<conio.h>
void main()
{
	int x,y,z;
	clrscr();
	cout<<"Enter number of rows : ";
	cin>>x;
	for(y=1;y<=x;y++)
	{
		for(z=1;z<=x-y;z++)
		cout<<" ";
		for(z=1;z<y;z++)
		cout<<z;
		for(;z>0;z--)
		cout<<z;
		cout<<endl;
	}
getch();
}



















































































































































































