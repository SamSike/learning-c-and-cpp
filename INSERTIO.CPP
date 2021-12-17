#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[100],i,j,n,temp;
	cout<<"Enter limit : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" : ";
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<"\t";
	getch();
}

