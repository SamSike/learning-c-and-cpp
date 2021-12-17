#include<iostream.h>
#include<conio.h>
void main()
{
	char ch='n';
	long int op,c,d;
	float x,a,b;
	do
	{
		clrscr();
		cout<<"Enter number for : 1.+, 2.-, 3.*, 4./, 5.% : ";
		cin>>op;
		cout<<"Enter two numbers : ";
		if(op!=5)
		cin>>a>>b;
		else
		cin>>c>>d;
		switch(op)
		{
			case 1:
			x=a+b;
			break;

			case 2:
			x=a-b;
			break;

			case 3:
			x=a*b;
			break;

			case 4:
			x=a/b;
			break;

			case 5:
			c=c%d;
			x=c;
			break;

			default:
			ch='y';
			goto end;
		}
		cout<<x<<"\nDo you want to continue? Type y/n : ";
		cin>>ch;
		end:
	}while(ch=='y'||ch=='Y');
getch();
}













































































