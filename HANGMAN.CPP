#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void display(int x)
{
	char a169=169,a170=170,a186=186,a187=187,a201=201,a202=202,a205=205,a234=234,a236=236,a239=239;
	switch(x)
	{
		case 1:
			gotoxy(6,3);
			cout<<a170;
		case 2:
			gotoxy(4,3);
			cout<<a169;
		case 3:
			gotoxy(5,4);
			cout<<a234;
		case 4:
			gotoxy(5,3);
			cout<<a239;
		case 5:
			gotoxy(5,2);
			cout<<a236;
		case 6:
			gotoxy(1,1);
			cout<<a201;
			for(int i=0;i<3;i++)
				cout<<a205;
			cout<<a187<<endl;
			for(i=0;i<4;i++)
				cout<<a186<<endl;
			cout<<a202;
	}
}
void main()
{
	clrscr();
	char str1[16],str2[16],l;
	int a,i,x;
	cout<<"Enter maximum 16 characters : ";
	gets(str1);
	for(i=strlen(str1);i<16;i++)
			str2[i]='\0';
	for(i=strlen(str1)-1;i>=0;i--)
			str2[i]='_';
	for(x=7;;)
	{
		clrscr();
		display(x);
		gotoxy(1,10);
		puts(str2);
		cout<<"Enter character : ";
		cin>>l;
		for(a=0,i=0;i<16;i++)
		{
			if(isupper(str1[i]))
				str1[i]=tolower(str1[i]);
			if(str1[i]==l)
			{
				str2[i]=l;
				a++;
			}
			if(str1[i]==' ')
				str2[i]=' ';
		}
		if(a==0)
			x--;
		if(strcmp(str1,str2)==0)
			break;
		if(x==1)
			break;
	}
	clrscr();
	puts(str1);
	if(x>1)
		cout<<"Player 2 Wins!";
	else
	{
		clrscr();
		display(1);
		cout<<endl;
		puts(str1);
		cout<<"Player 1 Wins!";
	}
getch();
}
