#include<stdlib.h>
#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
	clrscr();
	int i,x1=0,x2=0,x;
	for(i=0;x1<20,x2<20;i++)
	{
		if(i%2==0)
		{
			x1+=(x1%7)+(rand()%7);
			cout<<"Player 1 : "<<x1<<endl;
		}
		else
		{
			x2+=(x2%7)+(rand()%7);
			cout<<"\t\tPlayer 2 : "<<x2<<endl;
		}
		delay(500);
	}
	if(x1>20)
		cout<<endl<<"Player 1 wins";
	else
		cout<<endl<<"Player 2 wins";
getch();
}