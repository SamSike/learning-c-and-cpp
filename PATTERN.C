#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int a,i,n,x=10,y=3,a92=92,a192=192,a179=179,a196=196;
do
{
clrscr();
printf("Enter number of rows : ");
fflush(stdin);
scanf("%d",&n);
printf("Triangle - 1 or Pyramid - 2? ");
fflush(stdin);
scanf("%d",&i);
switch(i)
{
case 1:
for(i=1;i<=n;i++)
{
	if(i==n)
	{
		printf("%c",a192);
		for(a=1;a<i;a++)
			{
			printf("%c",a196);
			}
		printf("%c",a92);
	}

	else
	{
		printf("%c",a179);
		for(a=1;a<=i;a++)
			{
			if(a==i)
				printf("%c",a92);
			else
				printf(" ");
			}
	}
	printf("\n");
}
break;
case 2:
for(i=1;i<=n;i++)
{
	gotoxy(x,y);
		for(a=2;a<=i;a++)
		{
		if(i!=n)
		{
			if(a==2)
				printf("/");
			if(a==i)
				printf("%c",a92);
			else
				printf("  ");
		}
		if(i==n)
		{
			if(a==2)
				printf("/");
			if(a==i)
				printf("%c",a92);
			else
				printf("__");
		}
		}
	printf("\n");
	x--;
	y++;
}
break;
}
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}



















































































































































































