#include<stdio.h>
#include<conio.h>
void sum(int *a,int *b,int *c);
void main()
{
char ch;
int x,y,z,*a,*b,*c;
do
{
clrscr();
printf("Enter values : ");
fflush(stdin);
scanf("%d %d %d",&x,&y,&z);
sum(&x,&y,&z);
printf("%d %d %d",x,y,z);
printf("\nDo you want to continue? y/n : ");
fflush(stdin);
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}

void sum(int *a,int *b,int *c)
{
*a=*a**a**a;
*b=*b**b**b;
*c=*c**c**c;
}

















































































































































































