#include<iostream.h>
#include<conio.h>

void main()
{
	char a[3][3],p1,p2;
	int ch;
	clrscr();
	cout<<"Enter player 1 as X or 0 : ";
	cin>>p1;
	if(p1=='X')
		p2='0';
	else if(p1=='0')
		p2='X';
	else
	{
		p1='X';
		p2='0';
	}
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
		{
			gotoxy((i*4)+3,(j*4)+3);
			a[i][j]=(i*3)+j+49;
			cout<<a[i][j];
		}
	for(int k=0;k<9;k++)
	{
		gotoxy(1,15);
		cout<<"Enter position : ";
		again:
		cin>>ch;
		for(int x=0,i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				gotoxy((i*4)+3,(j*4)+3);
				cout<<a[i][j];
				if(a[i][j]==(ch+48))
				{
					gotoxy((i*4)+3,(j*4)+3);
					a[i][j]=(k%2==0)?p1:p2;
					cout<<a[i][j];
					x++;
				}
			}
		}
		if(x==0)
		{
			cout<<"Enter correct position : ";
			goto again;
		}
		if(a[0][0]==a[0][1]&&a[0][1]==a[0][2])
		{
			cout<<a[0][0]<<" Wins!";
			break;
		}
		else if(a[1][0]==a[1][1]&&a[1][1]==a[1][2])
		{	cout<<endl<<a[1][0]<<" Wins!";
			break;
		}
		else if(a[2][0]==a[2][1]&&a[2][1]==a[2][2])
		{	cout<<endl<<a[2][0]<<" Wins!";
			break;
		}
		else if(a[0][0]==a[1][0]&&a[1][0]==a[2][0])
		{	cout<<endl<<a[0][0]<<" Wins!";
			break;
		}
		else if(a[0][1]==a[1][1]&&a[1][1]==a[2][1])
		{	cout<<endl<<a[0][1]<<" Wins!";
			break;
		}
		else if(a[0][2]==a[1][2]&&a[1][2]==a[2][2])
		{	cout<<endl<<a[0][2]<<" Wins!";
			break;
		}
		else if(a[0][0]==a[1][1]&&a[1][1]==a[2][2])
		{	cout<<endl<<a[0][0]<<" Wins!";
			break;
		}
		else if(a[0][2]==a[1][1]&&a[1][1]==a[2][0])
		{	cout<<endl<<a[0][2]<<" Wins!";
			break;
		}
	}
getch();
}