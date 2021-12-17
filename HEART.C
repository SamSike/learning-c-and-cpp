#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int i,x=1,y=10;
do
{
clrscr();
textcolor(WHITE+BLINK);
for(i=0;i<8;i++)
{
	delay(50);
	gotoxy(x,y);
	cprintf("*");
	if(i<7)
	{
		x++,y++;
	}
}
for(i=0;i<13;i++)
{
	delay(50);
	x++,y--;
	gotoxy(x,y);
	cprintf("*");
}
for(i=0;i<13;i++)
{
	delay(50);
	x++,y++;
	gotoxy(x,y);
	cprintf("*");
}
for(i=0;i<13;i++)
{
	x++,y--;
	delay(50);
	gotoxy(x,y);
	cprintf("*");
}
for(i=0;i<8;i++)
{
	delay(50);
	if(i<7)
	{
		x++,y++;
	}
	gotoxy(x,y);
	cprintf("*");
}
textcolor(RED+BLINK);
x++,y++;
gotoxy(x,y);
for(i=0;i<20;i++)
{
delay(50);
cprintf("*");
}
gotoxy(1,20);
printf("\nDo you want to continue? y/n : ");
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}



















































































































































































