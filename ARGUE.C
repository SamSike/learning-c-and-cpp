#include<stdio.h>
#include<conio.h>
void sum(int x ,int y)
{
	printf("%d",x);
	printf("%d",y);
}

void main()
{
	int x, y;
	clrscr();
	printf("Enter values of x and y : ");
	scanf("%d%d",&x,&y);
	sum(x,y);
	getch();
}



