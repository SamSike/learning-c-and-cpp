#include <stdio.h>
#include <conio.h>
void main()
{
clrscr();
char gdr;
int age,yrs;
printf("Enter your gender as Male : M or Female : F\n");
scanf("%s",&gdr);
printf("Enter your age : ");
scanf("%d",&age);
if (gdr=='M')
{
if (age>21)
printf("You are eligible to be married");
else
yrs=21-age,
printf("You have %d more years to be eligible to be married",yrs);
}
else
{
if (age>18)
printf("You are eligible to be married");
else
yrs=18-age,
printf("You have %d more years to be eligible to be married",yrs);
}
getch();
}

