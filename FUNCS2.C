//3 datatypes for void//
#include<stdio.h>
#include<conio.h>
void character();
void integer();
void decimal();
void main()
{
char ch;
int choice;
do
{
clrscr();
start:
printf("Enter name - 1, number ops - 2, decimal number ops - 3 : ");
scanf("%d",&choice);
switch(choice)
{
case 1:
character();
break;
case 2:
integer();
break;
case 3:
decimal();
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

void character()
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
printf("Name has %d alphabets",i);
}

void integer()
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
printf("%d",c);
}

void decimal()
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
printf("%f",c);
}

















































































































































































