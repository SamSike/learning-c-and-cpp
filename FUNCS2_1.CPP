//3 datatypes for return//
#include<stdio.h>
#include<conio.h>
int character();
int integer();
float decimal();
void main()
{
char ch;
int choice;
float x;
do
{
clrscr();
start:
printf("Enter name - 1, number ops - 2, decimal number ops - 3 : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
x=character();
break;
case 2:
x=integer();
break;
case 3:
x=decimal();
break;
default:
goto start;
}
printf("%f",x);
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}

int character()
{
char n[10];
int i;
printf("Enter name : ");
scanf("%s",&n);
for(i=0;i<=10;i++)
{
	if(n[i]=='\0')
	break;
}
return(i);
}

int integer()
{
int x,y,c;
start1:
printf("Enter integers : ");
scanf("%d %d",&x,&y);
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
return(c);
}

float decimal()
{
float x,y,c;
int b;
start2:
printf("Enter decimal numbers : ");
scanf("%f %f",&x,&y);
printf("Add - 1, Subtract - 2, Multiply - 3, Divide - 4 : ");
scanf("%d",&b);
switch(b)
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
goto start2;
}
return(c);
}

















































































































































































