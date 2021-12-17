#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	char a;
	int x[10],i,num;
	clrscr();
	cout<<"Enter number : ";
	cin>>num;
	for(i=0;i<10,num!=0;i++,num/=16)
		x[i]=num%16;
	for(i--;i>=0;i--)
	{
		if(x[i]<10)
			cout<<x[i];
		else
		{
			a=x[i]+55;
			cout<<a;
		}
	}
getch();
}


