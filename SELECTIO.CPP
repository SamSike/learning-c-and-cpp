#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[100],i,j,n,loc,min;
	cout<<"Enter limit : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		min=a[i];
		loc=i;
		for(j=i+1;j<n;j++)
			if(min>a[j])
			{
				min=a[j];
				loc=j;
			}
		a[loc]=a[i];
		a[i]=min;
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
	getch();
}