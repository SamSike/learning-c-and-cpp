#include<sameer.h>

void main()
{
int a,x;
start:
clrscr();
printf("Enter number from 1-3 : ");
scanf("%d",&a);


switch(a)
{
case 1:
buffer();
break;
case 2:
circles();
break;
case 3:
symbols();
break;
default:

goto start;

}

getch();
}
