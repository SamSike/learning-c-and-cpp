#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
int i;
do
{
clrscr();
for(i=0;i<=400;i++)
{
delay(50);
printf("%d=%c\t",i,i);
}
printf("\nDo you want to continue? y/n : ");
scanf("%c",&ch);
}while(ch=='y'||ch=='Y');
getch();
}



















































































































































































