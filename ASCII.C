#include<stdio.h>
#include<conio.h>
void main()
{
char ch[10],h;
int i,a=0,b=0,c;
do
{
clrscr();
textcolor(WHITE + BLINK);
cprintf("Enter name : ");
fflush(stdin);
cscanf("%s",&ch);
gotoxy (1,2);
for(i=0;ch[i]!='\0';i++)
{
	cprintf("%c",ch[i]-32);
}
gotoxy (1,10);
textcolor(CYAN);
for(i=178;a<=79;a++)
{
	cprintf("%c",i);
}
gotoxy (1,8);
printf("\nLoading Virus.....");
a=0;
c=1;
textcolor(RED);
for(i=177;b<=100;a++)
{
	if(a<=79)
	{
		gotoxy (c,10);
		c++;
		cprintf("%c",i);
	}
	delay(25);
	if(b%5==0&&b!=100)
	b++;
	gotoxy (1,11);
	cprintf("%d%",b);
	b++;

}
printf("\nVirus Loaded Successfully");
printf("\n\nDo you want to load another virus? y/n : ");
fflush(stdin);
scanf("%c",&h);
}while(h=='y'||h=='Y');
getch();
}



















































































































































































