#include <stdio.h>
#include <conio.h>
void main()
{
clrscr();
int num,num2,num3,num4;
num=0;
num2=9;
num3=0;
num4=1;
do
{
do
{
printf(" ");
num=num+1;
}while(num<num2);
do
{
num=0;
printf("*");
num3=num3+1;
}while(num3<num4);
num2=num2-1;
num3=0;
printf("\n");
num4=num4+1;
}while(num4<10);
getch();
}