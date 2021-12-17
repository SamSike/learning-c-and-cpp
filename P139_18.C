#include<stdio.h>
#include<conio.h>
void main()
{
int n;
start:
clrscr();
printf("Enter value : ");
scanf("%d",&n);
switch(n)
{
case 2:
case 3:
n*=20;
break;
case 4:
n=n*n;
break;
default:
goto start;
}
printf("%d",n);
getch();
}


