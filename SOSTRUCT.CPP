#include<iostream.h>
#include<stdio.h>
#include<conio.h>
struct xyz
{
	long int empno,sal;
	char name[10];
};
void main()
{
	int num,i,j,x;
	clrscr();
	cout<<"Enter number of employees : ";
	cin>>num;
	xyz emp[100],temp;
	for(i=0;i<num;i++)
	{
		cout<<"\nEmp no : ";
		cin>>emp[i].empno;
		cout<<"Salary : ";
		cin>>emp[i].sal;
		cout<<"Name : ";
		gets(emp[i].name);
	}
	clrscr();
	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(emp[i].sal>emp[j].sal)
			{
				temp=emp[i];
				emp[i]=emp[j];
				emp[j]=temp;
			}
		}
		cout<<"\nEmp no. : "<<emp[i].empno<<"\tSalary : "<<emp[i].sal<<"\tName : ";
		puts(emp[i].name);
	}
	getch();
}