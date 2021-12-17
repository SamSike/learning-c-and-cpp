#include<iostream.h>
#include<conio.h>
void main()
{
	int rows,f=1,bl,i,j;
	clrscr();
	cout<<"Enter number of rows : ";
	cin>>rows;
	for(i=0;i<rows;i++)
	{
		for(bl=1;bl<=rows-i;bl++)
		cout<<" ";
		for(j=0;j<=i;j++)
		{
			if(j==0||j-i==0)
			f=1;
			else
			f*=(i-j+1)/j;
			cout<<" "<<f;
		}
		cout<<endl;

	}
getch();
}


















































































































































































