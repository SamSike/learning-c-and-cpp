#include<iostream.h>
#include<conio.h>
#include<dos.h>
class xyz
{
	public:
	void prime(int x,int y)
	{
		int i,f;
		for(;x<=y;x++)
		{
			for(i=2,f=0;i<x;i++)
			{
				if(x%i==0)
				f=1;
			}
			if(f==0 && x>1)
			cout<<x<<"\t";
			delay(50);
		}
		getch();
	}
};
void main()
{
	int x,y;
	xyz x1;
	clrscr();
	cout<<"Enter numbers : ";
	cin>>x>>y;
	x1.prime(x,y);
getch();
}



















































































































































































