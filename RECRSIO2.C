#include<stdio.h>
#include<conio.h>
int f,b,c;
int area(int a);
void main()
{
char ch;
do
{
start:
clrscr();
printf("Enter length of base of triangle : ");
scanf("%d",&b);
c=b;
f=area(b);
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}

int area(int a)
{
int i=1,a218=218,a196=196,a179=179;
if(a==0)
goto end;
for(i=1;i<=a;i++)
	{
		if(c==a)
		{
			if(i==1)
				printf("%c",a218);
			else
				printf("%c",a196);
		}
		else
		{
			if(i==1)
				printf("%c",a179);
			else
			{
				if(i==a)
					printf("/");
				else
					printf(" ");
			}
		}
	}
printf("\n");
a=area(a-1);
end:
return(1);
}



















































































































































































