#include<stdio.h>
#include<conio.h>
void sum(int *a,int *b);
void main()
{
char ch;
int x,y,*a,*b;
do
{
clrscr();
printf("Enter values : ");
scanf("%d %d",&x,&y);
printf("%d %d\n",&x,&y);
sum(&x,&y);
printf("%d %d",&x,&y);
printf("\nDo you want to continue? y/n : ");
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}

void sum(int *a,int *b)
{
int temp;
temp=*a,*a=*b,*b=temp;
}

















































































































































































