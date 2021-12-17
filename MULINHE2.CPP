#include<iostream.h>
#include<conio.h>
#define LEN 80
class student
{
private:
	char school[LEN];
	char degree[LEN];
public:
	void getedu()
	{
		cout<<"Enter name of school or university : ";
		cin>>school;
		cout<<"Enter highest degree earned : \n(Highschool, Bachelor's, Master's, PhD) : ";
		cin>>degree;
	}
	void putedu()
	{
		cout<<"\nSchool / University : "<<school<<"\nHighest degree earned : "<<degree;
	}
};
class employee
{
private:
	char name[LEN];
	unsigned long number;
public:
	void getdata()
	{
		cout<<"\nEnter last name : ";
		cin>>name;
		cout<<"Enter number : ";
		cin>>number;
	}
	void putdata()
	{
		cout<<"\nName : "<<name<<"\nNUmber : "<<number;
	}
};
class manager : private employee, private student
{
private:
	char title[LEN];
	double dues;
public:
	void getdata()
	{
		employee::getdata();
		cout<<"Enter title : ";
		cin>>title;
		cout<<"Enter golf club dues : ";
		cin>>dues;
		student::getedu();
	}
	void putdata()
	{
		employee::putdata();
		cout<<"\nTitle : "<<title<<"\nGolf Club Dues : "<<dues;
		student::putedu();
	}
};
class scientist : private employee, private student
{
private:
	int pubs;
public:
	void getdata()
	{
		employee::getdata();
		cout<<"Enter number of pubs : ";
		cin>>pubs;
		student::getedu();
	}
	void putdata()
	{
		employee::putdata();
		cout<<"\nNumber of publications : "<<pubs;
		student::putedu();
	}
};
class laborer : public employee
{
};

void main()
{
	clrscr();
	manager m1;
	scientist s1,s2;
	laborer l1;
	cout<<"\nEnter data for manager 1 : ";
	m1.getdata();
	cout<<"\nEnter data for scientist 1 : ";
	s1.getdata();
	cout<<"\nEnter data for scientist 2 : ";
	s2.getdata();
	cout<<"\nEnter data for laborer 1 : ";
	l1.getdata();
	cout<<"\nData on manager 1 : ";
	m1.putdata();
	cout<<"\nData on scientist 1 : ";
	s1.putdata();
	cout<<"\nData on scientist 2 : ";
	s2.putdata();
	cout<<"\nData on laborer 1 : ";
	l1.putdata();
	getch();
}