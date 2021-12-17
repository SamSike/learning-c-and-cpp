#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10][12],num,i;
	float avg=0,avg1=0;
	cout<<"Enter number of salesmen : ";
		cin>>num;
	for(int x=1;x<=num;x++)
	{
		cout<<"Enter sales for salesman "<<x<<" : ";
		for(avg=0,i=1;i<13;i++)
		{
			cout<<"Month "<<i<<" : ";
			cin>>a[x][i];
			avg+=a[x][i];
		}
		cout<<avg<<" is total sales\n"<<avg/12<<" is average sales";
		avg1+=avg;
	}
	cout<<avg1/num<<" = Average sales of all salesmen";
getch();
}