#include<stdio.h>
#include<conio.h>
int f,x,a;
int prime(int a);
int check(int x);
void main()
{
char ch;
int choice;
do
{
clrscr();
start:
printf("Range - 1, Check - 2 : ");
fflush(stdin);
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Enter number for end of range : ");
fflush(stdin);
scanf("%d",&x);
f=prime(x);
break;

case 2:
printf("Enter number : ");
fflush(stdin);
scanf("%d",&a);
x=2;
f=check(x);
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

int prime(int a)
{
int i,c=0;
if(a==1)
goto end;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
		{
			c=1;
			break;
		}
	}
if(c==0)
printf("%d\t",a);
a=prime(a-1);
end:
return 1;
}

int check(int x)
{
	if(a==x)
		{
			printf("Number is prime");
			goto end;
		}
	if(a%x==0)
		{
			printf("Number is not prime");
			goto end;
		}
x=check(x+1);
end:
return 1;
}
















































































































































































