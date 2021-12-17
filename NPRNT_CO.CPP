#include <stdio.h>
#include <conio.h>
void main()
{
int num;
clrscr();
char name[20];
printf("Enter your name in small letters : ");
scanf("%s",&name);
printf("Enter how many times you want your name to be printed\t");
scanf("%d",&num);
do
{
printf("%s\n",name);
num=num-1;
}while(num>0);
getch();
}