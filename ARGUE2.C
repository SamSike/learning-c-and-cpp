#include<stdio.h>
#include<conio.h>
int sum(int x, int y)
{
	return x+y;
}

int dif(int x, int y)
{
	return x-y;
}

int mul(int x, int y)
{
	return x*y;
}

float div(float xx, float yy)
{
	return xx/yy;
}

void main()
{
int a,x,y;
float xx,yy,z;
char ch;
do
{
clrscr();
printf("Enter x and y : ");
scanf("%d%d",&x,&y);
xx=x;
yy=y;
 start:
printf("Enter 1-Add, 2-Subtract, 3-Multiply, 4-Divide : ");
scanf("%d",&a);
switch(a)
{
case 1:
z=sum(x,y);
break;
case 2:
z=dif(x,y);
break;
case 3:
z=mul(x,y);
break;
case 4:
z=div(x,y);
break;
default:
printf("Please enter a number from 1-4");
goto start;
}
printf("%f \n",z);
printf("Do you want to continue? y/n : ");
scanf("%s",&ch);
}while(ch=='y'||ch=='Y');
getch();
}



