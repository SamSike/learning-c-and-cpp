#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<dos.h>
void main()
{
	clrscr();
	char a;
	int a1,i;
	for(i=1;i<255;i++)
	{
		do{
			a1=random(14)+1;
		}while(a1==7||a1==8);
		textcolor(a1);
//		if(i<20)
  //			getch();
		a=i;
		cout<<i<<".";
		cprintf("%c",a);
		cout<<'\t';
	}
getch();
}