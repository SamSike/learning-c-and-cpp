#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
long int c;
char ch;
do
{
	clrscr();
	do
	{
	printf("Enter number for factorial : ");
	scanf("%d",&a);
	if(a<1)
	printf("Please enter a number more than one\n");
	if(a>31)
	printf("Please enter a number less than 32\n");
	}while(a<1||a>31);
	c=a;
	b=a-1;

	do
	{
		c=c*b;
		b--;
	}while(b>1);
	if(c<0)
	c=-c;
printf("The factorial of %d is %li. \nDo you want to continue? y/n : ",a,c);
scanf("%s",&ch);
}while(ch=='Y'||ch=='y');
getch();
}
