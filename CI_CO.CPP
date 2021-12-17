#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
int n,r;
double p,ci,a,s;
clrscr();
printf("Enter Principle in Rs. ");
scanf("%f",&p);
printf("Enter Rate in Rs. ");
scanf("%f",&r);
printf("Enter Time in years : ");
scanf("%f",&n);
a=(1+(r/100));
s=pow(a,n);
s=p*a;
ci=a-p;
printf("The amount is Rs. %f with a compound interest of Rs. %f",s,ci);
getch();
}