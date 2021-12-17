#include <stdio.h>
#include <conio.h>
void main()
{
int q1,q2,q3,q4,q5,q6,c;
do
{
clrscr();
	printf("French revolution happened on \n1. 14 July 1789 \n2. 14 March 1789 \n3. 8 August 1857 4. 14 June 1789 : ");
	scanf("%d",&q1);
	if (q1==1)
	c=0;
	else
	c=1,
	printf("Please try again");
}while(c==1);
do
{
clrscr();
	printf("Bastille was in which part of the city? \n1. North \n2. South \n3. East 4. West : ");
	scanf("%d",&q2);
	if (q2==3)
	c=0;
	else
	c=1,
	printf("Please try again");
}while(c==1);
getch();
}
