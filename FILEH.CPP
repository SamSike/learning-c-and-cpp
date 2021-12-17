#include<iostream.h>
#include<fstream.h>
#include<conio.h>
class data
{
	public:
	char name[10];
	long double sal,sum,avg;
};
void main()
{
	data x[100];
	int num;
	const int MAX=100;
	char buffer[MAX];
	clrscr();
	cout<<"Enter number of employees : ";
	cin>>num;
	ofstream outfile("program.txt");
	for(int i=0;i<num;i++)
	{
		cout<<"Enter Name and Salary : ";
		cin>>x[i].name>>x[i].sal;
		outfile<<"Name : "<<x[i].name<<"\tSalary : "<<x[i].sal<<endl;
		x[0].sum+=x[i].sal;
	}
	x[0].avg=(x[0].sum)/num;
	outfile<<endl<<"Sum = "<<x[0].sum<<"\tAverage = "<<x[0].avg;
	cout<<"Done";
	getch();
}