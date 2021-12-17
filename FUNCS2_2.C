#include<stdio.h>
#include<conio.h>
void character(char n);
void integer(int x, int y);
void decimal(float a, float b);
void main()
{
char ch,n;
int x,y,choice;
float a,b;
do
{
clrscr();
start:
printf("Enter name - 1, number ops - 2, decimal number ops - 3 : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter alphabet : ");
fflush(stdin);
scanf("%c",&n);
character(n);
break;
case 2:
printf("Enter numbers : ");
scanf("%d %d",&x,&y);
integer(x,y);
break;
case 3:
printf("Enter numbers : ");
scanf("%f %f",&a,&b);
decimal(a,b);
break;
default:
goto start;
}
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}

void character(char n)
{
printf("%c",n);
}

void integer(int x, int y)
{
int c;
start1:
printf("Add - 1, Subtract - 2, Multiply - 3, Divide - 4 : ");
scanf("%d",&c);
switch(c)
{
case 1:
c=x+y;
break;
case 2:
c=x-y;
break;
case 3:
c=x*y;
break;
case 4:
c=x/y;
break;
default:
goto start1;
}
printf("%d",c);
}

void decimal(float a, float b)
{
float c;
int d;
start2:
printf("Add - 1, Subtract - 2, Multiply - 3, Divide - 4 : ");
scanf("%d",&d);
switch(d)
{
case 1:
c=a+b;
break;
case 2:
c=a-b;
break;
case 3:
c=a*b;
break;
case 4:
c=a/b;
break;
default:
goto start2;
}
printf("%f",c);
}



















































































































































































