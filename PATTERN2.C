#include<stdio.h>
#include<conio.h>
void rekt(int l, int b);
void main()
{
char ch;
int a,i,l,b;
do
{
clrscr();
printf("Enter length and breadth : ");
scanf("%d%d",&l,&b);
rekt(l,b);
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}


void rekt(int l, int b)
{
int i,a,g=177;
for(i=1;i<=b;i++)
{
	if(i==1||i==b)
	{
		for(a=1;a<=l;a++)
		{
		printf("%c",g);
		}
	}
	else
	{
		printf("%c",g);
		for(a=2;a<=l-1;a++)
		{
		printf(" ");
		}
		printf("%c",g);
	}
printf("\n");
}
}


















































































































































































