/*
*
**
***
****
*****
******
*******
*/
#include <stdio.h>
#include <conio.h>
void main()
{
clrscr();
int num,num2;
num=0;
num2=1;
do
{
do
{
printf("*");
num=num+1;
}while(num<num2);
num2=num2+1;
num=0;
printf("\n");
}while(num2<11);
getch();
}

