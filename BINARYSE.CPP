#include<iostream.h>
#include<conio.h>
void main()
{
	int f=0,l,m,n,i,j,a[100],s;
	clrscr();
	cout<<"Enter limit : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>a[i];
	}
	cout<<"Enter element to be searched : ";
	cin>>s;
	l=n-1;
	while(f<=l)
	{
		m=(f+l)/2;
		if(a[m]<s)
			f=m+1;
		else if(a[m]>s)
			l=m-1;
		else
		{
			cout<<"Position "<<m+1;
			break;
		}
	}
	if(f>l)
		cout<<"Not found";
	getch();
	}
