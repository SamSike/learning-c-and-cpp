#include<iostream.h>
#include<stdio.h>
struct Addr
{	int houseno;
	char area[26];
	char city[26];
	char state[26];	};
struct Emp
{	int empno;
	char name[26];
	char desig[16];
	Addr address;
	float basic;
}worker;
int main()
{	cout<<"\nEnter employee number : ";
	cin>>worker.empno;
	cout<<"Name : ";
	gets(worker.name);
	cout<<"Designation : ";
	gets(worker.desig);
	cout<<"Enter Address : House no : ";
	cin>>worker.address.houseno;
	cout<<"Area : ";
	gets(worker.address.area);
	cout<<"City : ";
	gets(worker.address.city);
	cout<<"State : ";
	gets(worker.address.state);
	cout<<"Basic Pay : ";
	cin>>worker.basic;
	return 0;
}