#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	char a[10];
	int i,n,sum;
	cout<<"Enter hexal code : ";
	cin>>a;
	for(i=0;i<10,a[i]!='\0';i++)
		cout<<a[i]<<endl;
	n=i-1;
	int r=0;
	for(i=0,sum=0;n>=0;i++,n--)
	{
		switch(a[i])
		{
			case 'A':
			r=10;
			break;
			case 'B':
			r=11;
			break;
			case 'C':
			r=12;
			break;
			case 'D':
			r=13;
			break;
			case 'E':
			r=14;
			break;
			case 'F':
			r=15;
			break;
			default:
			r=a[i]-48;
		}
		r*=pow(16,n);
		sum+=r;
	}
	cout<<sum;
getch();
}