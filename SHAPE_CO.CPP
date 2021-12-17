#include <stdio.h>
#include <conio.h>
#define pi 3.14
void triangle();
void square();
void rectangle();
void parallelogram();
void circle();

void main()
{
int shape,user;

do
{
clrscr();
printf("Calculation of Area of different shapes \n");
printf("Triangle-1, Square-2, Rectangle-3,\nParallelogram-4, Circle-5 : ");
scanf("%d",&shape);
if (shape==1)
{
 triangle();
};
if (shape==2)
{
 square();
};
if (shape==3)
{
 rectangle();
};
if (shape==4)
{
 parallelogram();
};
if (shape==5)
{
 circle();
};
printf("\nEnter 0 to end program / 1 to restart : ");
scanf("%d",&user);
}while(user==1);
getch();
}

void triangle()
{
float tb,th,ta;
printf("Enter length of base of triangle in cm : "),
scanf("%f",&tb),
printf("Enter length of height of triangle in cm : "),
scanf("%f",&th),
ta=(th*tb)/2,
printf("The area of the triangle is %f cm sqr",ta);
}

void square()
{
float sa,ss;
printf("Enter length of side of square in cm : "),
scanf("%f",&ss),
sa=ss*ss,
printf("The area of the square is %f cm sqr",sa);
}

void rectangle()
{
float rl,rb,ra;
printf("Enter length of rectangle's length in cm : "),
scanf("%f",&rl),
printf("Enter length of rectangle's breadth in cm : "),
scanf("%f",&rb),
ra=rl*rb,
printf("The area of the rectangle is %f cm sqr",ra);
}

void parallelogram()
{
int pb,ph,pa;
printf("Enter length of base of parallelogram in cm : "),
scanf("%f",&pb),
printf("Enter length of height of parallelogram in cm : "),
scanf("%f",&ph),
pa=ph*pb,
printf("The area of the parallelogram is %f cm sqr",pa);
}

void circle()
{
int cr,ca;
printf("Enter length of radius of circle in cm : "),
scanf("%f",&cr),
ca=cr*cr*pi,
printf("The area of the circle is %f cm sqr",ca);
}