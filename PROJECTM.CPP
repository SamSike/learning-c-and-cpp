#include<iostream.h>
#include<conio.h>
char a173=173,a228=228;

void normal()
{
	start:
	clrscr();
	int n,f[100],_fi=0,i;
	float x[100],_x,_xifi=0;
	cout<<"Enter number of elements : ";
	cin>>n;
	if(n>100||n<0)
		goto start;
	clrscr();
	cout<<"x"<<a173<<"\n";
	for(i=0;i<n;i++)
		cin>>x[i];
	gotoxy(7,1);
	cout<<"f"<<a173;
	for(i=0;i<n;i++)
	{
		gotoxy(8,i+2);
		cin>>f[i];
		_fi+=f[i];
	}
	gotoxy(7,i+2);
	cout<<a228<<"f"<<a173<<"="<<_fi;
	gotoxy(15,1);
	cout<<"x"<<a173<<"f"<<a173;
	for(i=0;i<n;i++)
	{
		gotoxy(16,i+2);
		cout<<x[i]*f[i];
		_xifi+=x[i]*f[i];
	}
	gotoxy(15,i+2);
	cout<<a228<<"x"<<a173<<"f"<<a173<<"="<<_xifi;
	_x=((_xifi)/(_fi));
	gotoxy(1,i+4);
	cout<<"Mean="<<_x;
}
void assumed()
{
}
void deviation()
{
}
void mean()
{
	start:
	clrscr();
	int ch;
	cout<<"Use which method?";
	cout<<"\n\t1.Normal\n\t2.Assumed Mean\n\t3.Step Deviation\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			normal();
			break;
		case 2:
			assumed();
			break;
		case 3:
			deviation();
			break;
		default:
			goto start;
	}
}
void median()
{

}
void main()
{
	start:
	clrscr();
	int ch;
	cout<<"To find Mean Deviation about";
	cout<<"\n\t1.Mean\n\t2.Median\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			mean();
			break;
		case 2:
			median();
			break;
		default:
			goto start;
	}
	getch();
}