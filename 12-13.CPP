#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[10][3],num,i;
	float avg=0,avg1=0;
	char grade;
	cout<<"Enter number of students : ";
		cin>>num;
	for(int x=1;x<=num;x++)
	{
		cout<<"Enter marks for student "<<x<<" : ";
		for(avg=0,i=1;i<4;i++)
		{
			cout<<"Subject "<<i<<" : ";
			cin>>a[x][i];
			avg+=a[x][i];
		}
		cout<<avg<<" is total marks\n"<<avg/(i-1)<<" is average marks\n";
		avg1+=avg;
		avg/=i-1;
		if(avg<45)
			grade='D';
		else if(avg<60)
			grade='C';
		else if(avg<75)
			grade='B';
		else
		grade='A';
		cout<<"Grade is "<<grade<<endl;
	}
	cout<<avg1/num<<" = Average marks of all students\n";
getch();
}