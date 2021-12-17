#include <stdio.h>
#include <conio.h>
void main()
{
int a,b=2;
clrscr();
do
{
a=1;
	do
	{
	printf("*");
	a++;
	}while(a<b);
printf("\n");
b++;
}while(b<12);
getch();
}


