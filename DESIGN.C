#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int c,x,y;
do
{
start:
clrscr();
printf("Enter design from 1-3 : ");
scanf("%d",&c);
switch(c)
{
case 1:
clrscr();
for(x=1;x<=3;x++)
{
gotoxy(5,x+4);
		for(y=1;y<=3;y++)
		{
		if(x==1||x==3)
		printf("*");
		else
		{
			if(y==1||y==3)
			printf("*");
			else
			printf(" ");
		}
		}
}
delay(300);
for(x=1;x<=5;x++)
{
gotoxy(3,x+2);
		for(y=1;y<=5;y++)
		{
		if(x==1||x==5)
		printf("*");
		else
		{
			if(y==1||y==5)
			printf("*");
			else
			printf(" ");
		}
		}
}
delay(300);
for(x=1;x<=7;x++)
{
gotoxy(1,x);
		for(y=1;y<=7;y++)
		{
		if(x==1||x==7)
		printf("*");
		else
		{
			if(y==1||y==7)
			printf("*");
			else
			printf(" ");
		}
		}
}
break;
case 2:
for(;c<=21;c++)
{
for(x=1;x<=3;x++)
{
gotoxy(5,x+4);
		for(y=1;y<=3;y++)
		{
		if(x==1||x==3)
		printf("*");
		else
		{
			if(y==1||y==3)
			printf("*");
			else
			printf(" ");
		}
		}
}
delay(300);
clrscr();
for(x=1;x<=5;x++)
{
gotoxy(3,x+2);
		for(y=1;y<=5;y++)
		{
		if(x==1||x==5)
		printf("*");
		else
		{
			if(y==1||y==5)
			printf("*");
			else
			printf(" ");
		}
		}
}
delay(300);
clrscr();
for(x=1;x<=7;x++)
{
gotoxy(1,x);
		for(y=1;y<=7;y++)
		{
		if(x==1||x==7)
		printf("*");
		else
		{
			if(y==1||y==7)
			printf("*");
			else
			printf(" ");
		}
		}
}
clrscr();
delay(300);
}
break;
case 3:
for(x=1;x<=3;x++)
{
gotoxy(5,x+4);
		for(y=1;y<=3;y++)
		{
		if(x==1||x==3)
		printf("*");
		else
		{
			if(y==1||y==3)
			printf("*");
			else
			printf(" ");
		}
		}
}
clrscr();
delay(300);
for(x=1;x<=5;x++)
{
gotoxy(3,x+2);
		for(y=1;y<=5;y++)
		{
		if(x==1||x==5)
		printf("*");
		else
		{
			if(y==1||y==5)
			printf("*");
			else
			printf(" ");
		}
		}
}
clrscr();
delay(300);
for(x=1;x<=7;x++)
{
gotoxy(1,x);
		for(y=1;y<=7;y++)
		{
		if(x==1||x==7)
		printf("*");
		else
		{
			if(y==1||y==7)
			printf("*");
			else
			printf(" ");
		}
		}
}
clrscr();
delay(300);
for(x=1;x<=5;x++)
{
gotoxy(3,x+2);
		for(y=1;y<=5;y++)
		{
		if(x==1||x==5)
		printf("*");
		else
		{
			if(y==1||y==5)
			printf("*");
			else
			printf(" ");
		}
		}
}
clrscr();
delay(300);
for(x=1;x<=3;x++)
{
gotoxy(y,x+4);
		for(y=1;y<=3;y++)
		{
		if(x==1||x==3)
		printf("*");
		else
		{
			if(y==1||y==3)
			printf("*");
			else
			printf(" ");
		}
		}
}
break;
default:
goto start;
}
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}



















































































































































































