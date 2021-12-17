#include<iostream.h>
#include<conio.h>
class xyz
{
	public:
	int i,j,x;
	void pattern(int num)
	{
		for(i=1,x=-1;i<=num;i++,x+=2)
		{
			for(j=1;j<=(num-i);j++)
				cout<<" ";
			if(i!=1&&i!=num)
			{
				cout<<"&";
				for(j=1;j<=x;j++)
					cout<<" ";
				cout<<"&";
			}
			else
				for(j=1;j<=i;j++)
					cout<<"& ";
			cout<<endl;
		}
	}
};
void main()
{
	clrscr();
	int num;
	xyz x1;
	cout<<"Enter number : ";
	cin>>num;
	x1.pattern(num);
getch();
}




















































































































































































